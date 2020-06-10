#ifndef _KOMORKA_H
#define _KOMORKA_H
#include<string>
#include<iostream>

/* 
 *Klasa reprezentująca pojedynczą komórkę
 */

class komorka {

public:

/* 
 *@metoda przypisująca (w założeniu) wczytywane z pliku liczby do parametru 'wartosc' 
 */
	virtual int wartosc_wczytana(string liczba) = 0; //liczba w zapis_tablica() w tablica.cpp - getline to string

/* 
 *@metoda zwracająca wczytaną wartość string 
 */
	virtual string zwrocona_string();

/* 
 *@metoda zwracająca wczytaną wartość int 
 */
	virtual int zwrocona_int(); 
 
};

/* 
 *Klasa reprezentująca komórkę typu int
 */

class komorka_int : public komorka {

private: 

/* 
 *@parametr wartosc wartość int z założenia wpisywana do komórki
 */
	int wartosc;

public:

	komorka_int() {
		wartosc = 0;
	}

	int wartosc_wczytana(string liczba);

/* 
 *@return wartosc 
 */
	int zwrocona_int();

};

/* 
 *Klasa reprezentująca komórkę typu string
 */

class komorka_string : public komorka {

private: 

/* 
 *@parametr wartosc wartość string z założenia wpisywana do komórki
 */
	string wartosc;

public:

	komorka_string() {
		wartosc = "0";
	}

	int wartosc_wczytana(string liczba); 

/* 
 *@return wartosc 
 */
	string zwrocona_string();

};


#endif
