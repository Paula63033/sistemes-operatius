## HandsOn6

* **Descriu les diferències entre aquests dos codi i raona el motiu de les diferències observades. (Fixa't en el fork() i en l'obertura del descriptor open())**

l'arxiu que el fork s'executa primer, sobreescriu al fitxer out.txt el text "so", aixo es degut a que tant el pare com el fill obren el fitxer al mateix moment, i executen el mateix seguit de codi. L'arxiu on s'executa primer el open, el fill hereda el fitxer, el pare escriu "so" i posa un salt de linea, el fill al tenir el fitxer heredat amb el text del pare escrit previament, escriura "so" a la linea seguent; es  a dir, fa un "append".

* **Modifiqueu el codi anterior per tenir una comunicació bidireccional seguint els passos anteriors.**

Fitxer adjunt: act2.c

*  **On van les dades després de l’escriptura a una pipe, però abans de la lectura del pipe?**

Tota l'estructura de la pipe es mou pel kernel; totes les dades que viatgen per la canonada es mouen pel kernel. Les dades no viatjen per les dades de l'usuari.

* **Es comparteix l’espai d'adreces entre dos processos Pare-Fill que comparteixen un pipe?**

No

* **Explica que fa el codi següent i raona l'efecte de comentar i descomentar la línia marcada amb //(X)**

Si tenim el close comentat, el programa ens mostra la següent sortida:

"I got a message! It was msg1"
"I got a message! It was msg2"

i es queda en stand-by, ja que no tanquem el pipe en cap moment.

Mentres que si descomentem el close, sí que es tanca la tuberia, de menera que ens mostra una línea més a la sortida i acaba el programa.

"I got a message! It was msg1"
"I got a message! It was msg2"
"No more messages :("

Si esta comentat el close el pipe es queda obert i es fa un bucle infinit. Si no esta comentat, es tanca la tuberia i surt del bucle, de manera que acaba el programa fent l'ultim printf.

* **Completeu aquest codi amb c per aconseguir replicar la comanda (ls | wc -l).**

Fitxer adjunt: act4.c

* **Modifiqueu el codi anterior per tenir dos processos fills, un farà el ls i l'altre el wc -l. El pare esperarà que els dos fills acabin per acabar**

Fitxer adjunt: act5.c

* **Milloreu el codi presentat, eliminar repeticions, simplificant la lògica, millorant el Makefile... Com a mínim heu de fer una aportació.**

Fitxers:

sala.c
jugador.c
Makefile

Hem millorat el fitxer Makefile unificant en una sola etiqueta els arxius .c i .o corresponents

* **Millorant la pokédex a partir de l'aventura. FET** 

fitxers /act-pokemon/*

* **Simulant combats Pokémon. NO FET DEL TOT**

fitxers /act-pokemon/

**Generar un nombre enter aleatori entre 1 i 151**: FET. Metode ``int getPokemonRandom(){`` de la classe ``pokemon.c``
**Inicialitzar la seva vida amb el valor de pokemon_hp.**: 

