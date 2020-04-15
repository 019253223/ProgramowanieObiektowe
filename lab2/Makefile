program: main.o menu.o tablica.o 
	g++ -o program main.o menu.o tablica.o 

main.o: main.cpp tablica.h menu.h
	g++ -c main.cpp

menu.o: menu.cpp menu.h
	g++ -c menu.cpp

tablica.o: tablica.cpp tablica.h
	g++ -c tablica.cpp


