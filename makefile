all: connections

connections: main.o my_mat.o
	gcc -Wall -o connections main.o my_mat.o 

main.o: main.c my_mat.h
	gcc -Wall -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -c my_mat.c

clean:
	rm -f *.o connections