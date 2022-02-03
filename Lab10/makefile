all: Lab10

Lab10: Date.o LongDate.o Lab10.o
		g++ -std=c++11 Date.o LongDate.o Lab10.o -o Lab10

Date.o: Date.cpp Date.h
		g++ -std=c++11 Date.cpp -c

LongDate.o: LongDate.cpp LongDate.h
		g++ -std=c++11 LongDate.cpp -c

Lab10.o: Lab10.cpp LongDate.h Date.h
		g++ -std=c++11 Lab10.cpp -c

clean:
		rm -rf *.o;
