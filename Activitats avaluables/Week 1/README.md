# Activitats Avaluables Week 1 - Correcció

**ACT1**

* **Quantes crides a sistema es fan de cada tipus?**

 close(): 6

 read(): 3

 open(): 4

 write(): 1

 %desc: Crides a sistema relacionades amb descriptors de fitxers. read(), write(), open(), close(),…

* **Quines accions es produeixen després d’executar aquesta comanda?**

Primerament, per fer un cat, necessitarem crear el fitxer test i posar-hi contingut. Si escrivim ``cat test > test.out``, crearà el fitxer test.out, fent que al contingut d’aquest hi aparegui el contingut de text (és a dir, a copiat a test.out el contingut de test). Per tant, genera un fork.

**ACT2**

Fitxers adjunts de la activitat:

1. **experiment.c**
2. **act_av02_os.c**

* **Analitzar el següent codi: src/vl01/activities/act_av02_os.c**
* **Corregir els warnings generats en la compilació**

Hem tingut problemes per executar el codi degut als include, però era pel SO en el qual l’estavem executant, que era windows. Es podria arribar a executar el codi en un entorn Windows, pero caldria importar/afegir les llibreries requerides al IDE que estiguessim fent servir. Per sol·lucionar això, hem treballat el codi en l’entorn Debian (per passar els fitxers de la maquina real a la virtual, ho fem mitjançant comandes emprant el servei SFTP).
Un cop arreglat això i provant el codi en entorn Linux, ens salta el següent error quan intentem compilar:

simplement calia afegir el import de ``<stdio.h>``

* **Explicar que fa aquest codi**

En aquest codi podem veure el cost d'us dels mètodes ``getPid()`` i ``foo()``, la seva eficiencia. Destaquem que ``foo()`` es una funció bàsica, unicament ens retorna un int 10. ``getPid()`` es una comanda del sistema que ens dona el ID del procés actual. Executem les comandes un total de ``N_iterations`` (1000000) per obtenir un valor més acurat del seu cost, una mitjana del temps. Entenem que el cost de les comandes que ataquen al sistema es altament probable que el seu cost sigui una mica diferent cada cop que l'executem, degut a l'estat actual del sistema (procesos, serveis...). 

* **Explicar les diferències entre una crida a sistema i una crida a procediment? Quina és més costosa i Per què?**


Una crida al sistema es un mètode utilitzat pels programes d’aplicació (un arxiu C per exemple) per comunicar-se amb el mètode del sistema, les crides al sistema permeten utilitzar rutines de codi, instruccions privilegiades. Linux ens dona aprox 300 crides al sistema. Això ens pot ser de gran utilitat ja que tenim una gran varietat de mètodes que treballen així.

Un exemple de crida a sistema bàsica: ``getpid()``;

Un procediment l’entenem com un segui de codi que ens permet fer el tractament d’alguna cosa, un mètode normal i corrent. Alguns exemples en son el tractament d’interrupcions, excepcions, traps per, posteriorment, fer que no es “trenqui” el programa, o simplement una funció de tipus int que ens torni el quadrat d’un nombre.

Entenem que una crida al sistema sempre (o, com a mínim,  la majoria de cops) serà més costosa que una crida a un mètode, pel fet de que una crida al sistema ha d’adrentrar-se a la informació interna del sistema per tractar o agafar les dades que calgui, i sempre tenint en compte que el cost de fer servir aquella crida es diferent degut al estat del sistema en aquell moment d'execució.

* **Generar un experiment.c per demostrar-ho.**

El que hem fet en aquesta activitat es modificar l’arxiu anterior aprofitant funcions i codi que ens interessa, hem optat per estudiar les següents funcions:

1. ``pow(2,3)`` (mètode de llibreria Math.h, ens dona, en aquest cas, el cub del nombre 2)
2. ``getppid()`` (crida a sistema. retorna el identificador de procés del pare de l'procés actual)

Cal destacar que per fer ús de la funcio pow, cal importar la llibreria Math.h
La sortida ha estat la següent:

1. Time for 1: 448.398010
2. Time for 2: 2.156000