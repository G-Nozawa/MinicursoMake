.DELETE_ON_ERROR:
all: soma.o multiplica.o main.o 

main.o: main.c soma.o multiplica.o
	gcc main.c multiplica.o soma.o -o main.o
	touch main.o

soma.o: soma.c
	gcc soma.c -c soma.o
	touch soma.o

multiplica.o: multiplica.c
	gcc multiplica.c -c multiplica.o
	touch multiplica.o

clean:
	rm ./*.o
