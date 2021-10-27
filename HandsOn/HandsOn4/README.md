# HANDS ON 4

- **Repetir els passos amb l'ordre yes > /dev/null. Què fa aquesta ordre? Quines diferències trobeu amb l'execució de l'ordre anterior? (0,5 punts)**

L'ordre yes envia una serie de 'y' a la sortida estandard, /dev/null es un dispositiu 'forat negre', tot el que es pasi 'desapareixerà', així 'yes>/dev/null' no mostrara res en la sortida estandard ja que tot es va a /dev/null

yes > /dev/null està en estat R (running), en canvi si fem amb els passos anteriors amb el sleep fa té diferents estats: primer la S(interruptible sleep), després la T( stopped by job control signal) i després la S (que conjuntament es com fer un running).

El procés sleep envia el procés directament al estat S que espera a que l'evant es completi en aquest cas passin els X segons.

- **Modificar aquest procés per obtenir una sortida indicant Hola sóc el procés pare i Hola sóc el procés fill. (0,5 punts)**

Hem creat el fitxer ``proces_test.c``

Comentaris: Aquest exercici no és correcte. No teniu **fork()**.
Solució:
```c
#include <sys/types.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include<stdlib.h>
int main () {
    pid_t p1 = fork();
    assert (p1 >= 0);

	if (p1 > 0){
        	printf("Hola sóc el pare amb pid %d \n", getpid());
	}
	else if (p1 == 0){
		printf("Hola sóc el fill amb pid %d \n", getpid());
	}
	exit(0);
}
```

- **Modificar aquest exemple fent anar la funció execv(). (0,5 punts)**

Hem creat el fitxer ``excev_test.c``


- **Explica el funcionament del programa. Indicant quants senyals s'envien, quin procés envia el senyal, i on l'envia. (2,5 punts)**

Primer comença fent un ``fork()`` per esdevenir procesos pare i fill. Si el fork es mes gran que 0, representa que esta entrant en el proces del pare. Sino, procés del fill.

la comanda ``fflush(stdout)`` ens serveix per assegurar-nos de que ens donara la sortida per consola

Primer entra al pare, i es quan ens dona la surtida de ``Hola soc el pare i el meu pid= XXXX``, i no comença pel fill fins que no li envia la primera señal, que es el fragment de codi ``waitpid(-1, 0, WUNTRACED)``.

Aleshores entra al fill, i dona la sortida de: ``Hola soc el fill i el meu pid= XXXX``, acte seguit realitza la comanda de ``kill`` passant-li per parametre el id de ell mateix amb la instrucció ``getPid()`` i SIGSTOP, que es com un ctrl+z

llavors torna al pare, i es quan dona la sortida de ``Hola soc el pare i he de continuar... però millor que ho faci el meu fill xD\n ...Enviant SIGCONT...``, i torna a fer un kill per enviar señal al proces, passantli el fork i SIGCONT, es a dir estem reanudant el proces anteriorment parat.

tornem al fill i ens dona la sortida ``Hola soc el fill he rebut SIGCONT... ha treballar\n``, i matem el proces fill. es torna al pare per defecte.

finalment fa un parell de ``waitpid`` per suspendre la execució del procés. Espera qualsevol cosa del fill, quan acabi i el final.

es llavors quan entra a la part final que ens diu ``Hola soc el pare acabem el programa`` i fa un ``exit(0)`` per tancar el programa

Us falta comentar que el programa genera 5 senyals. Els canvis d'estat del fill generats per SIGCON i SIGSTOP generen la senyal SIGCHL que notifica el pare d'aquest esdeveniments en el fill i ens obliga a tenir que esperar per 2 senylas adicionals (es veu amb els 2 primers ```waits```). L'ordre ```exit()```també la genera i per tant necessitem un ultim ```wait()`` per esperar el SIGCHLD generat per l'exit.


- **Programeu un programa pare, fill net que tingui la següent sortida (mantenint l’ordre). A més a més els fills, hauran de generar un enter aleatori entre els valors 0,1 i 2. El 0=apunyalat, 1=decapitat.  (4 punts)**

Programa creat: ``pare_fill_net.c``

Comentaris del exercici al Pull Request.

- **Per acabar realitzeu el següent test al campus virtual relacionat amb els continguts treballats en aquest HandsOn. El seu valor és de 2 punts.**

Questionari fet amb nota de 1.55. Fet amb el perfil de Alejandro Ramon Martinez.
