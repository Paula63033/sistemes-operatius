## Hands On 3

* **Explica per què necessitem la línia amb el comentari  //*******
TIP: Taula ASCII**

(my_tty->driver->ops->write) (my_tty, "\015\012", 2);

on my_tty és tty on volem escriure, "\015\012" és un punter a una cadena i 2 és la longitud de la cadena.

\015: per a que faci un salt de linea i pugui continuar fent comandes (retorno de carro).
\012: per avanzar de línea (avance de línea).

* **Act 01: Analitzeu la següent situació i comenteu amb detall que succeeix al sistema i quins perills pot comportar per l'usuari.**

printk sempre va acompanyat de KERN_INFO. Son missatges que s'imprimeixen a la memòria intermèdia de registre del nucli, que és un memòria intermèdia d'anell exportat a l'espai d'usuari a través de /dev/kmsg.

El primer argument del mètode és el nom de la trucada al sistema. El segon i tercer argument macro descriuen el tipus i el nom del primer argument de la trucada al sistema.

KERN_INFO és una macro. Es defineix a tools /include/linux/kern_levels.h al codi font de linux4.15-25

Entenem que la següent crida al sistema que ens donara informació sobre el kernel de la maquina, i aixo pot ser perillos de cara a que un altre usuari conegui aquesta informació.

* **Act 02: Hack el kernel per imprimir aquest missatge cada cop que un usuari obra un fitxer: " :) Your file filename.txt is being opened!!!"**

Fitxers adjunts de l'activitat:

- ftrace_helper.h
- rootkit.c
