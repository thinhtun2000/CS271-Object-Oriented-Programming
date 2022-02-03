all: Lab9

Lab9: Term.o Lab9.o
	g++ -std=c++11 Term.o Lab9.o -o Lab9

Term.o: Term.cpp Term.h
	g++ -std=c++11 Term.cpp -c

Lab9.o: Lab9.cpp Term.h
	g++ -std=c++11 Lab9.cpp -c

clean:
	rm -rf *.o;
