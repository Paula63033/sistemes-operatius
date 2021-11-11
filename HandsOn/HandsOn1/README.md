## HandsOn1

### **Q1: What command should I do now if I want to change HEAD to master branch?**

<span style="color:red">

**Incorrecte**:
1. Primer ens assegurem de que existeix la branca en questió amb la comanda per llistar: ``` git branch ```
2. Seguidament, executem la comanda: ``` git checkout FeatureB ```

També ho podriem fer de la següent manera:
 
* ``` git switch FeatureB  ```
* ``` git switch -c FeatureB ``` (en el cas de que no existeixi originalment)

</span>

<span style="color:blue">**Solució:**</span>

En aquest cas únicament feia falta fer un ```git checkout master```.




----

### **Q2: Introduce in order the commands to change initial status and obtain the final status:**

<span style="color:red"> **Incorrecte**:

1. ``` git add * ``` (per afegir tots els arxius del directori actual)
2. ``` git commit -m "arxius .py pujats" ```
3. ``` git push -u origin master ```

</span>

<span style="color:blue">**Solució:**</span>

```bash
$ git checkout master #Ens posem a la branca master
$ git branch featureC #Afegim la branca amb nom featureC
$ git checkout featureC #Ens movem de master a featureC
$ touch c.py #Creació d'un fitxer buit (c.py)
$ git add c.py #Afegim al repo el fitxer
$ git commit -m "adding c.py in featureC" #Commit + comentari
[featureC 306ed90] adding c.py in featureC
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 c.py
$ touch d.py
$ git add d.py
$ git commit -m "adding d.py in featureC"
[featureC df4ff50] adding d.py in featureC
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 d.py
```

----

### **Q3: How many levels did you pass in the game? Which ones?**

Hem trobat interessant tenir en compte tota aquesta serie de comandes que ens presenten només inicar el joc:

![image](https://user-images.githubusercontent.com/38278207/135923895-f743dbbb-bb15-46a7-b255-62523ea1c1c8.png)

Hem assolit els següents nivells:

1. Secuencia introductoria
2. Acelerando

La resta els estem continuant treballant, tot i que de primeres no ens han sortit
