#include<iostream>
using namespace std;
#include"tablica.h"

void zapis_tablica (int rozmiar, int kolumny, int **arkusz) {

    cout<<"Podaj liczbe wierszy: ";
    cin>>rozmiar;


    for( int i = 1; i <= rozmiar; i++ ) {
        cout<<"Podaj liczbe kolumn w "<< i << " wierszu: ";
        cin>>kolumny;
        arkusz[i] = new int[kolumny];    // alokacja tablicy

    for(int j=1; j <= kolumny; j++) {
        cout<<"Wpisz do komorki "<< j << " wartosc : ";
        cin>>arkusz[i][j];              //wpisywanie liczby do tablicy
    }
    }
}


int wyswietlanie_tablica (int **arkusz){

 
	//return ;
}


void wpisz_zawartosc (int **arkusz, int rozmiar, int kolumny) {

}


