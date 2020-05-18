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
cout << arr.arkusz;
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

//**************************

int suma_kolumny (Tablica arr, int ktora_kolumna) {

		int suma = 0;
		
		if (ktora_kolumna < arr.ilosc_kolumn) {
		    for (int i = 0; i < arr.ilosc_kolumn; i++) {

			suma = suma + arr.arkusz[i][ktora_kolumna-1];

		    }

		    cout << "Suma wartosci komorek w kolumnie " << ktora_kolumna << " wynosi: " << suma << endl;
		}

		else cout << "Nie ma takiej kolumny" << endl;
return 0;
}

//*************************
int suma_wiersze (Tablica arr, int ktory_wiersz) {

		int suma = 0;
		
		if (ktory_wiersz < arr.ilosc_wierszy) {
		    for (int i = 0; i < arr.ilosc_wierszy; i++) {

			suma = suma + arr.arkusz[ktory_wiersz-1][i];

		    }

		    cout << "Suma wartosci komorek w wierszu " << ktory_wiersz << " wynosi: " << suma << endl;
		}

		else cout << "Nie ma takiego wiersza" << endl;
return 0;
}	

//*********************	

int maksimum_kolumny (Tablica arr, int ktora_kolumna) {

		int max = arr.arkusz[0][ktora_kolumna-1];

		if (ktora_kolumna < arr.ilosc_kolumn) {
		   for (int i = 1; i < arr.ilosc_kolumn; i++) {
			if (max < arr.arkusz[i][ktora_kolumna-1]) {
				max = arr.arkusz[i][ktora_kolumna-1];
			}
		    }
		    cout << "Maksimum w kolumnie " << ktora_kolumna << " wynosi: " << max;
		 } 

		else cout << "Nie ma takiej kolumny" << endl;  
return 0;
}

//*********************	

int maksimum_wiersze (Tablica arr, int ktory_wiersz) {

		int max = arr.arkusz[ktory_wiersz-1][0];

		if (ktory_wiersz < arr.ilosc_wierszy) {
		   for (int i = 1; i < arr.ilosc_wierszy; i++) {
			if (max < arr.arkusz[ktory_wiersz-1][i]) {
				max = arr.arkusz[ktory_wiersz-1][i];
			}
		    }
		    cout << "Maksimum w wierszu " << ktory_wiersz << " wynosi: " << max;
		 } 

		else cout << "Nie ma takiego wiersza" << endl;  
return 0;
}

//*********************

int minimum_kolumny (Tablica arr, int ktora_kolumna) {

		int min = arr.arkusz[0][ktora_kolumna-1];

		if (ktora_kolumna < arr.ilosc_kolumn) {
		   for (int i = 1; i < arr.ilosc_kolumn; i++) {
			if (min > arr.arkusz[i][ktora_kolumna-1]) {
				min = arr.arkusz[i][ktora_kolumna-1];
			}
		    }
		    cout << "Minimum w kolumnie " << ktora_kolumna << " wynosi: " << min;
		 } 

		else cout << "Nie ma takiej kolumny" << endl;  
return 0;
}

//********************	

int minimum_wiersze (Tablica arr, int ktory_wiersz) {

		int min = arr.arkusz[ktory_wiersz-1][0];

		if (ktory_wiersz < arr.ilosc_wierszy) {
		   for (int i = 1; i < arr.ilosc_wierszy; i++) {
			if (min > arr.arkusz[ktory_wiersz-1][i]) {
				min = arr.arkusz[ktory_wiersz-1][i];
			}
		    }
		    cout << "Minimum w wierszu " << ktory_wiersz << " wynosi: " << min;
		 } 

		else cout << "Nie ma takiego wiersza" << endl;  
return 0;
}

//*********************

int srednia_kolumny (Tablica arr, int ktora_kolumna) {
		    
		    float srednia = 0;

		    if (ktora_kolumna < arr.ilosc_kolumn) {

			for (int i =0; i < arr.ilosc_kolumn; i++) {

			    srednia = srednia + arr.arkusz[i][ktora_kolumna-1];
			}
		    srednia = srednia/arr.ilosc_kolumn;
		    cout << "Srednia wartosc w kolumnie " << ktora_kolumna << " wynosi: " << srednia;
		    }
return 0;
}

//*********************

int srednia_wiersze (Tablica arr, int ktory_wiersz) {
		    
		    float srednia = 0;

		    if (ktory_wiersz < arr.ilosc_wierszy) {

			for (int i =0; i < arr.ilosc_wierszy; i++) {

			    srednia = srednia + arr.arkusz[ktory_wiersz-1][i];
			}
		    srednia = srednia/arr.ilosc_wierszy;
		    cout << "Srednia wartosc w kolumnie " << ktory_wiersz << " wynosi: " << srednia;
		    }
return 0;
}
