# Documentació de les pràctiques. Alex i Paula - 2n GTIDIC

## HandsOn0 - Correcció

* **Ex1.Think about the advantages and disadvantages of this election of partitions and explain why we decide to  choose the third one? [ 0,75 / 2 punts]**

Tenir /home separat ens permet re-instal·lar el sistema o canviar de sistema sense perdre dades. En temes de seguretat, elsdirectoris /var i /tmp es poden plenar de serveis o programes de l'usuari, separant-ho evitem problemes amb l'arrel de l'usuari. Rendiment: com mes petita es la partició menys costa accedir-hi, podriem fer que /home tingui un sistema de fitxers confiable i /tmp sigui d'acces mes rapid. 

* **Look up on the net and explain what is a swap partition and why this is recommended in the partition table.**

Es una particio q el sistema fa servir quan no pot accedir a la ram per x rao

* **Why this is not working? How we can solve it? Write and justify the answer?**

El problema esta en q el nostre usuari no te permisos de superusuari, no esta al fitxer sudoers. Ens posem a l'usuari root i fem un vim sudo visudo i afegim el nostre usuari com a super-usuari.

* **So, it is time for Sherlock Holmes to enter the scene. Your task is to research and try to explain this behaviour?**

/tmp es un directori temporal, sempre q iniciem el sistema es reinicia

* **Install git in the machine and write here the command used?**

Amb permisos de super-usuari, fem apt install git


## HandsOn1

* **What command should I do now if I want to change HEAD to master branch?**

Primer ens assegurem de que existeix la branca en questió amb la comanda per llistar:
``` git branch ```

Seguidament, executem la comanda:
``` git checkout FeatureB ```

També ho podriem fer de la següent manera:
 
``` git switch FeatureB  ```

``` git switch -c FeatureB ``` (en el cas de que no existeixi originalment)

* **Introduce in order the commands to change initial status and obtain the final status:**

1. ``` git add * ``` (per afegir tots els arxius del directori actual)
2. ``` git commit -m "arxius .py pujats" ```
3. ``` git push -u origin master ```

* **How many levels did you pass in the game? Which ones?**

Hem trobat interessant tenir en compte tota aquesta serie de comandes que ens presenten només inicar el joc:

![image](https://user-images.githubusercontent.com/38278207/135923895-f743dbbb-bb15-46a7-b255-62523ea1c1c8.png)

Hem assolit els següents nivells:

1. Secuencia introductoria
2. Acelerando

La resta els estem continuant treballant, tot i que de primeres no ens han sortit

# Activitats Avaluables Week 1 - Correcció

**ACT1**

*  Quantes crides a sistema es fan de cada tipus? 

 close(): 6

 read(): 3

 open(): 4

 write(): 1

 %desc: Crides a sistema relacionades amb descriptors de fitxers. read(), write(), open(), close(),…


* Quines accions es produeixen després d’executar aquesta comanda? 

Primerament, per fer un cat, necessitarem crear el fitxer test i posar-hi contingut. Si escrivim ``cat test > test.out``, crearà el fitxer test.out, fent que al contingut d’aquest hi aparegui el contingut de text (és a dir, a copiat a test.out el contingut de test). Per tant, genera un fork.

**ACT2**

Fitxers adjunts de la activitat:

experiment.c

act_av02_os.c

* Analitzar el següent codi: src/vl01/activitiesact_av02_os.c 
* Corregir els warnings generats en la compilació 

Hem tingut problemes per executar el codi degut als include, però era pel SO en el qual l’estavem executant, que era windows. Es podria arribar a executar el codi en un entorn Windows, pero caldria importar/afegir les llibreries requerides al IDE que estiguessim fent servir. Per sol·lucionar això, hem treballat el codi en l’entorn Debian (per passar els fitxers de la maquina real a la virtual, ho fem mitjançant comandes emprant el servei SFTP).
Un cop arreglat això i provant el codi en entorn Linux, ens salta el següent error quan intentem compilar:

simplement calia afegir el import de <stdio.h>

* Explicar que fa aquest codi?
* 
Un com executem el codi, veiem que ens dona la següent sortida:

Veiem que ens mostra dos temps, els quals son els mateixos nombres pero, el 2n, partint el nombre per les “unitats”, és a dir, ens dona el temps en segons.
El que estem comparant es la funcio del sistema getPid() amb la funció pow() i la volta al bucle es 100.000 per poder obtenir una mitjana del temps 

Pensem que el codi està fet per comprovar la eficiencia de la funció getTime, comprobar quan temps tarda a executar-se i investigar el seu cost

* Explicar les diferències entre una crida a sistema i una crida a procediment? Quina és més costosa i Per què? 


Una crida al sistema es un mètode utilitzat pels programes d’aplicació (un arxiu C per exemple) per comunicar-se amb el mètode del sistema, les crides al sistema permeten utilitzar rutines de codi, instruccions privilegiades. Linux ens dona aprox 300 crides al sistema. Això ens pot ser de gran utilitat ja que tenim una gran varietat de mètodes que treballen així, per exemple: 

Un procediment l’entenem com un segui de codi que ens permet fer el tractament d’alguna cosa, un mètode normal i corrent. Alguns exemples en son el tractament d’interrupcions, excepcions, traps per, posteriorment, fer que no es “trenqui” el programa, o simplement una funció de tipus int que ens torni el quadrat d’un nombre.
Entenem que una crida al sistema sempre (o, com a mínim,  la majoria de cops) serà més costosa que una crida a un mètode, pel fet de que una crida al sistema ha d’adrentrar-se a la informació interna del sistema per tractar o agafar les dades que calgui.

* Generar un experiment.c per demostrar-ho.
*
El que hem fet en aquesta activitat es modificar l’arxiu anterior aprofitant funcions i codi que ens interessa, hem optat per estudiar les següents funcions:
getTimeofDay: crida al sistema, ja la teniem anteriorment

Math.pow: ens dona el quadrat d’un nombre

tot això aprofitant el càlcul de AvgT1 i AvgT2 per comprovar quina de les 2 funcions és més costosa. 

El resultat es el següent:

On podem verificar com, efectivament, una crida al sistema es més costosa que un procediment o funció normal:
