all: lab3

lab3: lab3functions.o lab3.o
	gcc lab3functions.o lab3.o -o lab3

lab3.o: lab3.c lab3functions.h
	gcc -c lab3.c

lab3functions.o: lab3functions.c lab3functions.h
	gcc -c lab3functions.c

clean:
	rm -rf *.o;
