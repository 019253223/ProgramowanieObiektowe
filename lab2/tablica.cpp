#include<iostream>
#include<fstream>
using namespace std;
#include"tablica.h"

int zapis_tablica (int rozmiar, int kolumny, int **arkusz) { //funkcja nie działa tak jak powinna i na razie wyświetlam w tej funkcji też arkusz, żeby sprawdzić czy poprawnie zapisuje - NIE

ifstream plik;
string liczba;

plik.open("plik.dat");
if(plik.good() == true) {
plik >> rozmiar;
getline(plik,liczba);
plik >> kolumny;
 //omijam,bo w pierwszych 2 wersach jest liczba wierszy i liczba kolumn

 int arkusz [rozmiar][kolumny];
    while(!plik.eof()){

    getline(plik, liczba, ',');

        for (int i = 1; i < rozmiar; i++){
            for (int j = 1; j < kolumny; j++)
                plik >> arkusz[i][j];
        }

	for(int i = 1; i < rozmiar; i++){
            for(int j = 1; j < kolumny; j++)
            cout << arkusz[i][j] << " ";

        }

      cout<<endl;

        
     }

plik.close();

}
}

//***********************************

void wyswietlanie_tablica (int **arkusz){
//cout
}

//*******************************

int wpisz_zawartosc (int **arkusz, int rozmiar, int kolumny) {

return **arkusz;
}
