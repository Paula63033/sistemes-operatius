all: sala jugador

sala.o: sala.c
	gcc -c sala.c -o sala.o

jugador.o: jugador.c
	gcc -c jugador.c -o jugador.o

clean:
	rm -r jugador jugador.o sala sala.o

test:
	./sala 60 5 AAAA

run:
	./sala $(ARGS)
