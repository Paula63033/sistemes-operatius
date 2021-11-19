## Hands On 3

* **Explica per què necessitem la línia amb el comentari  //*******
TIP: Taula ASCII**

(my_tty->driver->ops->write) (my_tty, "\015\012", 2);

on my_tty és tty on volem escriure, "\015\012" és un punter a una cadena i 2 és la longitud de la cadena.

\015: per a que faci un salt de linea i pugui continuar fent comandes (retorno de carro).
\012: per avanzar de línea (avance de línea).

* **Act 01: Analitzeu la següent situació i comenteu amb detall que succeeix al sistema i quins perills pot comportar per l'usuari.**



* **Act 02: Hack el kernel per imprimir aquest missatge cada cop que un usuari obra un fitxer: " :) Your file filename.txt is being opened!!!"**



* **Repte: Explicar que fa el fitxer helper.c.**
