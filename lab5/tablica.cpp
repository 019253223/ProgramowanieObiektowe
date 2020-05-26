#include<iostream>
#include<fstream>
using namespace std;
#include"tablica.h"

Tablica::Tablica () {
	int ilosc_wierszy = 0;
	int ilosc_kolumn = 0;

 	arr = new int * [ilosc_wierszy];
	
	for (int i = 0; i < ilosc_wierszy; i++) {
	     arr[i] = new int [ilosc_kolumn];
	}
}

Tablica::~Tablica () {
	for (int i = 0; i < ilosc_wierszy; i++) {
	    delete [] arr[i];	    
	}
	    delete [] arr;
}

int Tablica::zapis_tablica () { 

		ifstream plik;
		string liczba;

		plik.open("plik.dat");

		if(plik.good() == true) {
		   getline(plik,liczba, '\n');
		   ilosc_wierszy = stoi(liczba);
		   getline(plik,liczba, '\n');
		   ilosc_kolumn = stoi(liczba); 
 

		   arr = new int* [ilosc_wierszy];
		   for (int i = 0; i < ilosc_wierszy; i++) {

			arr[i] = new int [ilosc_kolumn];
			
		   }

    		   while(!plik.eof()) {

			getline(plik, liczba, ',');

			for (int i = 0; i < ilosc_wierszy; i++) {
           		    for (int j = 0; j < ilosc_kolumn; j++) {
					
					arr[i][j] = stoi(liczba);
				
			    }
       			 }

        
		    }

		   plik.close();

		}


//funkcja nie działa

return **arr;   
}

//***********************************

/*
int Tablica::zapis_do_pliku () {
		ofstream plik;
		string liczba;

		plik.open("zapis do pliku.dat");

		plik << ilosc_wierszy << endl;
		   
		plik << ilosc_kolumn << endl; 

    		

		for (int i = 1; i < ilosc_wierszy; i++) {
           	     for (int j = 1; j < ilosc_kolumn; j++) {

			  plik << arr[i][j];
			  plik << ",";
		     }
		     plik << endl;
       		}		
		     		  
		  
		plik.close();
return 0;
}

*/

//***********************************

void Tablica::wyswietlanie_tablica () {

	 for (int i = 0; i < ilosc_wierszy; i++) {
		for (int j = 0; j < ilosc_kolumn; j++) {
			cout << arr[i][j];
		}
		cout<<endl;
	 }
} 

//*******************************

int Tablica::ustaw_wartosc (int wartosc, int ktory_wiersz, int ktora_kolumna) {
	if (ktory_wiersz > ilosc_wierszy || ktora_kolumna > ilosc_kolumn) {
		cout << "Nie ma takiej komorki" << endl;
	}
	else
		arr[ktory_wiersz-1][ktora_kolumna-1] = wartosc;

//funkcja działa

return 0; 
} 
//*********************************

int Tablica::zmien_rozmiar (int nowe_wiersze, int nowe_kolumny) {

		   //rezerwacja miejsca dla nowej tablicy (nowy rozmiar)

		   int ** tab = new int * [nowe_wiersze];
		   for (int i = 0; i < nowe_wiersze; i++) {
	     		tab[i] = new int [nowe_kolumny];
		   }

		   //kopiowanie zawrtosci starej tablicy

		   for (int i = 0; i < ilosc_wierszy; i++) {
			tab[i] = arr[i];
			for (int j=0; j < ilosc_kolumn; j++) {
			    tab[j] = arr[j];
			}
		   }
				
		   //zwonienie pamieci po starej tablicy (delete)

		   for (int i = 0; i < ilosc_wierszy; i++) {
			delete [] arr[i];	    
		   }
	   		 delete [] arr;

		   //przestawienie wskaznika arkusz na nowe miejsce w pamieci

		   arr = tab; //jak przestawić wskaźnik


//funkcja nie działa

//return **arr; 
}

//**************************

int Tablica::suma_kolumny (int ktora_kolumna) {

		int suma = 0;
		
		if (ktora_kolumna < ilosc_kolumn) {
		    for (int i = 0; i < ilosc_kolumn; i++) {

			suma = suma + arr[i][ktora_kolumna-1];

		    }

		    cout << "Suma wartosci komorek w kolumnie " << ktora_kolumna << " wynosi: " << suma << endl;
		}

		else cout << "Nie ma takiej kolumny" << endl;
return 0;
}

//*************************
int Tablica::suma_wiersze (int ktory_wiersz) {

		int suma = 0;
		
		if (ktory_wiersz < ilosc_wierszy) {
		    for (int i = 0; i < ilosc_wierszy; i++) {

			suma = suma + arr[ktory_wiersz-1][i];

		    }

		    cout << "Suma wartosci komorek w wierszu " << ktory_wiersz << " wynosi: " << suma << endl;
		}

		else cout << "Nie ma takiego wiersza" << endl;
return 0;
}	

//*********************	

int Tablica::maksimum_kolumny (int ktora_kolumna) {

		int max = arr[0][ktora_kolumna-1];

		if (ktora_kolumna < ilosc_kolumn) {
		   for (int i = 1; i < ilosc_kolumn; i++) {
			if (max < arr[i][ktora_kolumna-1]) {
				max = arr[i][ktora_kolumna-1];
			}
		    }
		    cout << "Maksimum w kolumnie " << ktora_kolumna << " wynosi: " << max;
		 } 

		else cout << "Nie ma takiej kolumny" << endl;  
return 0;
}

//*********************	

int Tablica::maksimum_wiersze (int ktory_wiersz) {

		int max = arr[ktory_wiersz-1][0];

		if (ktory_wiersz < ilosc_wierszy) {
		   for (int i = 1; i < ilosc_wierszy; i++) {
			if (max < arr[ktory_wiersz-1][i]) {
				max = arr[ktory_wiersz-1][i];
			}
		    }
		    cout << "Maksimum w wierszu " << ktory_wiersz << " wynosi: " << max;
		 } 

		else cout << "Nie ma takiego wiersza" << endl;  
return 0;
}

//*********************

int Tablica::minimum_kolumny (int ktora_kolumna) {

		int min = arr[0][ktora_kolumna-1];

		if (ktora_kolumna < ilosc_kolumn) {
		   for (int i = 1; i < ilosc_kolumn; i++) {
			if (min > arr[i][ktora_kolumna-1]) {
				min = arr[i][ktora_kolumna-1];
			}
		    }
		    cout << "Minimum w kolumnie " << ktora_kolumna << " wynosi: " << min;
		 } 

		else cout << "Nie ma takiej kolumny" << endl;  
return 0;
}

//********************	

int Tablica::minimum_wiersze (int ktory_wiersz) {

		int min = arr[ktory_wiersz-1][0];

		if (ktory_wiersz < ilosc_wierszy) {
		   for (int i = 1; i < ilosc_wierszy; i++) {
			if (min > arr[ktory_wiersz-1][i]) {
				min = arr[ktory_wiersz-1][i];
			}
		    }
		    cout << "Minimum w wierszu " << ktory_wiersz << " wynosi: " << min;
		 } 

		else cout << "Nie ma takiego wiersza" << endl;  
return 0;
}

//*********************

int Tablica::srednia_kolumny (int ktora_kolumna) {
		    
		    float srednia = 0;

		    if (ktora_kolumna < ilosc_kolumn) {

			for (int i =0; i < ilosc_kolumn; i++) {

			    srednia = srednia + arr[i][ktora_kolumna-1];
			}
		    srednia = srednia/ilosc_kolumn;
		    cout << "Srednia wartosc w kolumnie " << ktora_kolumna << " wynosi: " << srednia;
		    }
return 0;
}

//*********************

int Tablica::srednia_wiersze (int ktory_wiersz) {
		    
		    float srednia = 0;

		    if (ktory_wiersz < ilosc_wierszy) {

			for (int i =0; i < ilosc_wierszy; i++) {

			    srednia = srednia + arr[ktory_wiersz-1][i];
			}
		    srednia = srednia/ilosc_wierszy;
		    cout << "Srednia wartosc w kolumnie " << ktory_wiersz << " wynosi: " << srednia;
		    }
return 0;
}
