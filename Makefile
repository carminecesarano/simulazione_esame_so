all: main.o prodcons.o
	gcc -o start  main.o prodcons.o

main.o: main.c prodcons.h
	gcc -c -o main.o  main.c

prodcons.o: prodcons.c prodcons.h
	gcc -c -o prodcons.o  prodcons.c

clean:
	rm -f *.o
	rm -f start