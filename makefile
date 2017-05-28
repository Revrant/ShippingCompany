HeepShipping: main.o Warehouse.o Package.o
	g++ -std=c++11 -g -Wall main.o Warehouse.o Package.o -o HeepShipping
main.o: main.cpp Warehouse.h
	g++ -std=c++11 -g -Wall -c main.cpp
Warehouse.o: Warehouse.h Warehouse.cpp
	g++ -std=c++11 -g -Wall -c Warehouse.cpp
Package.o: Package.h Package.cpp
	g++ -std=c++11 -g -Wall -c Package.cpp
clean:
	rm *.o HeepShipping
