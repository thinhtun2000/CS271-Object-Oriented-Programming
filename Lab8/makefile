all: Calendar

Calendar: Date.o Calendar.o Time.o
	g++ -std=c++11 Date.o Time.o Calendar.o -o Calendar

Calendar.o: Calendar.cpp Time.h Date.h
	g++ -std=c++11 -c Calendar.cpp

Time.o: Time.cpp Time.h
	g++ -std=c++11 -c Time.cpp

Date.o: Date.cpp Date.h
	g++ -std=c++11 -c Date.cpp

clean:
	rm -rf *.o;
