#include<iostream>
#include<fstream>
using namespace std;
#include"tablica.h"


int zapis_tablica (Tablica *arr) { //funkcja nie działa tak jak powinna i na razie wyświetlam w tej funkcji też arkusz, żeby sprawdzić czy poprawnie zapisuje - nadal nie

		ifstream plik;
		string liczba;

		plik.open("plik.dat");

		if(plik.good() == true) {

		   plik >> arr->ilosc_wierszy;
		   getline(plik,liczba);
		   plik >> arr->ilosc_kolumn; //omijam,bo w pierwszych 2 wersach jest liczba wierszy i liczba kolumn

    		   while(!plik.eof()) {

			getline(plik, liczba, ',');

			for (int i = 1; i < arr->ilosc_wierszy; i++) {
           		    for (int j = 1; j < arr->ilosc_kolumn; j++) {

				plik >> arr->arkusz[i][j];
			    }
       			 }

			for(int i = 1; i < arr -> ilosc_wierszy; i++) {
            		   for(int j = 1; j < arr->ilosc_kolumn; j++) {

				cout << arr->arkusz[i][j] << " ";
			   }

        		}

			cout<<endl;

        
		    }

		   plik.close();

		}

return **arr->arkusz;
}

//***********************************

/*
int zapis_do_pliku (Tablica *arr) {
		ofstream plik;
		string liczba;

		plik.open("zapis do pliku.dat");

		plik << arr->ilosc_wierszy << endl;
		   
		plik << arr->ilosc_kolumn << endl; 

    		

		for (int i = 1; i < arr->ilosc_wierszy; i++) {
           	     for (int j = 1; j < arr->ilosc_kolumn; j++) {

			  plik << arr->arkusz[i][j];
			  plik << ",";
		     }
		     plik << endl;
       		}		
		     		  
		  
		plik.close();
return 0;
}

*/

//***********************************

void wyswietlanie_tablica (Tablica arr) {
//cout
}

//*******************************

int ustaw_wartosc (Tablica *arr, int wartosc) {

return **arr->arkusz;
}
//*********************************

int zmien_rozmiar (Tablica *arr, int nowe_wiersze, int nowe_kolumny) {

		   //rezerwacja miejsca dla nowej tablicy (nowy rozmiar)

		   int ** tab = new int * [nowe_wiersze];
		   for (int i = 0; i < nowe_wiersze; i++) {
	     		tab[i] = new int [nowe_kolumny];
		   }

		   //kopiowanie zawrtosci starej tablicy

		   for (int i = 0; i < arr->ilosc_wierszy; i++) {
			tab[i] = arr->arkusz[i];
			for (int j=0; j < arr->ilosc_kolumn; j++) {
			    tab[j] = arr->arkusz[j];
			}
		   }
				
		   //zwonienie pamieci po starej tablicy (delete)

		   for (int i = 0; i < arr->ilosc_wierszy; i++) {
			delete [] arr->arkusz[i];	    
		   }
	   		 delete [] arr->arkusz;

		   //przestawienie wskaznika arkusz na nowe miejsce w pamieci

		   **arr->arkusz = **tab;

return **arr->arkusz;
}
