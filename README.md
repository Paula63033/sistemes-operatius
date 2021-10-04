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

*  Quantes crides a sistema es fan de cada tipus? 
- close(): 6
- read(): 3
- open(): 4
- write(): 1
- %desc: Crides a sistema relacionades amb descriptors de fitxers. read(), write(), open(), close(),…

* Quines accions es produeixen després d’executar aquesta comanda? Primerament, per fer un cat, necessitarem crear el fitxer test i posar-hi contingut. Si escrivim cat test > test.out, crearà el fitxer test.out, fent que al contingut d’aquest hi aparegui el contingut de text (és a dir, a copiat a test.out el contingut de test). Per tant, genera un fork.




