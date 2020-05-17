#include<iostream>
#include<fstream>
using namespace std;
#include"tablica.h"

int zapis_tablica (int ilosc_wierszy, int ilosc_kolumn, int **arkusz) { //funkcja nie działa tak jak powinna i na razie wyświetlam w tej funkcji też arkusz, żeby sprawdzić czy poprawnie zapisuje - NIE

		ifstream plik;
		string liczba;

		plik.open("plik.dat");

		if(plik.good() == true) {

		   plik >> ilosc_wierszy;
		   getline(plik,liczba);
		   plik >> ilosc_kolumn; //omijam,bo w pierwszych 2 wersach jest liczba wierszy i liczba kolumn

 		   int arkusz [ilosc_wierszy][ilosc_kolumn];

    		   while(!plik.eof()) {

			getline(plik, liczba, ',');

			for (int i = 1; i < ilosc_wierszy; i++) {
           		    for (int j = 1; j < ilosc_kolumn; j++) {

				plik >> arkusz[i][j];
			    }
       			 }

			for(int i = 1; i < ilosc_wierszy; i++) {
            		   for(int j = 1; j < ilosc_kolumn; j++) {

				cout << arkusz[i][j] << " ";
			   }

        		}

			cout<<endl;

        
		    }

		   plik.close();

		}
return **arkusz;
}

//***********************************

void wyswietlanie_tablica (int **arkusz) {
//cout
}

//*******************************

int ustaw_wartosc (int **arkusz, int ilosc_wierszy, int ilosc_kolumn, int wartosc) {

return **arkusz;
}
//*********************************

int zmien_rozmiar (int **arkusz, int ilosc_wierszy, int ilosc_kolumn, int nowe_wiersze, int nowe_kolumny) {

		   //rezerwacja miejsca dla nowej tablicy (nowy rozmiar)

		   int ** tab = new int * [nowe_wiersze];
		   for (int i = 0; i < nowe_wiersze; i++) {
	     		arkusz[i] = new int [nowe_kolumny];
		   }

		   //kopiowanie zawrtosci starej tablicy

		   for (int i = 0; i < ilosc_wierszy; i++) {
			tab[i] = arkusz[i];
			for (int j=0; j < ilosc_kolumn; j++) {
			    tab[j] = arkusz[j];
			}
		   }
				
		   //zwonienie pamieci po starej tablicy (delete)

		   for (int i = 0; i < ilosc_wierszy; i++) {
			delete [] arkusz[i];	    
		   }
	   		 delete [] arkusz;

		   //przestawienie wskaznika arkusz na nowe miejsce w pamieci

		   **arkusz = **tab;
}
