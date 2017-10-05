all: mystrfunctions.o main.o
	gcc -o run mystrfunctions.o main.o

mystrfunctions.o: mystrfunctions.c
	gcc -c mystrfunctions.c

main.o: main.c myheaders.h
	gcc -c main.c

clean:
	rm *.o
	rm -f *~

run: all
	./run
