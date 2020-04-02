#include<iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;
#include"tablica.h"
#include"menu.h"

int main () {
int wybor,rozmiar,kolumny;
    int **arkusz = new int * [rozmiar];

    wybor = menu(wybor);

    switch (wybor) {
case 1:                                 //Uzupelnij caly arkusz
        zapis_tablica (rozmiar,kolumny,arkusz);
    break;
case 2: //Wyswietl caly arkusz
	wyswietlanie_tablica (arkusz);
    break;
case 3: //Wystwietl zawartosc komorki
    break;
case 4: //Wpisz wartosc do komorki
    break;
case 5: //Usun wartosc w komorce
    break;
case 6: //Dodawanie komorek
    break;
case 7: //Odejmowanie komorek
    break;
case 8: //Mnozenie komorek
    break;
case 9: //Zamiana komorek miejscami
    break;
case 10: exit (0);
    break;
default: cout<<"Nie ma takiej opcji"<<endl;
}

getchar (); getchar ();
system ("cls");






for (int i = 0; i<rozmiar; i++)
delete [] arkusz[i];

delete [] arkusz;
return 0;}
