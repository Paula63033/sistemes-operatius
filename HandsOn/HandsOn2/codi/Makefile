main_v2: main_v2.o pokedex.o pokemon.o
	gcc main_v2.o pokedex.o pokemon.o -o main_v2 

main_v2.o: main_v2.c
	gcc -c main_v2.c

pokedex.o: pokedex.c pokedex.h
	gcc -c pokedex.c

pokemon.o: pokemon.c pokemon.h
	gcc -c pokemon.c

clear:
	/bin/rm -rf *.o main_v2
execute:
	./main_v2
