#ifndef _KOMORKA_H
#define _KOMORKA_H
#include<string>
#include<iostream>

class komorka {

public:
	virtual int wartosc_wczytana(string liczba) = 0; //liczba w zapis_tablica() w tablica.cpp - getline to string
	virtual string zwrocona_string();
	virtual int zwrocona_int(); 
 
};


class komorka_int : public komorka {

private: 
	int wartosc;

public:
	int wartosc_wczytana(string liczba);
	int zwrocona_int();

};


class komorka_string : public komorka {

private: 
	string wartosc;

public:
	int wartosc_wczytana(string liczba); 
	string zwrocona_string();

};


#endif
