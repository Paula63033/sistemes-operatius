## HandsOn6

* **Descriu les diferències entre aquests dos codi i raona el motiu de les diferències observades. (Fixa't en el fork() i en l'obertura del descriptor open())**

l'arxiu que el fork s'executa primer, sobreescriu al fitxer out.txt el text "so", aixo es degut a que tant el pare com el fill obren el fitxer al mateix moment, i executen el mateix seguit de codi. L'arxiu on s'executa primer el open, el fill hereda el fitxer, el pare escriu "so" i posa un salt de linea, el fill al tenir el fitxer heredat amb el text del pare escrit previament, escriura "so" a la linea seguent; es  a dir, fa un "append".

* **Modifiqueu el codi anterior per tenir una comunicació bidireccional seguint els passos anteriors.**

Fitxer adjunt: act2.c

*  **On van les dades després de l’escriptura a una pipe, però abans de la lectura del pipe?**



* **Es comparteix l’espai d'adreces entre dos processos Pare-Fill que comparteixen un pipe?**