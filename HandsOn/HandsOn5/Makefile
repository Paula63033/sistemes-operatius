all: game pokemon

pokedex/pokemon.o: pokedex/pokemon.c
	gcc -c pokedex/pokemon.c -o pokedex/pokemon.o

pokedex/pokedex.o: pokedex/pokedex.c 
	gcc -c pokedex/pokedex.c -o pokedex/pokedex.o

game: game.c pokedex/pokedex.o pokedex/pokemon.o
	gcc pokedex/pokemon.o pokedex/pokedex.o game.c -o game

pokemon: pokemon.c 
	gcc pokemon.c -o pokemon

clean:
	/bin/rm -rf *.o
	/bin/rm -rf $(EXECUTABLE)