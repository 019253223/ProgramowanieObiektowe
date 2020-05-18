#include<iostream>
using namespace std;
#include"menu.h"
#include"tablica.h"

void drukuj_menu() {

    cout << "Co chcesz zrobic?"<<endl<<"Wybierz opcje z dostepnych ponizej i wpisz wybrany numer: ";
    cout<<endl<<endl;
    cout
    <<"1. Uzupelnij caly arkusz"<<endl
    <<"2. Wyswietl caly arkusz"<<endl
    <<"3. Wyswietl zawartosc komorki"<<endl
    <<"4. Wpisz wartosc do komorki"<<endl
    <<"5. Sumuj według kolumn"<<endl
    <<"6. Sumuj według wierszy"<<endl
    <<"7. Znajdź wartość największą w kolumnie"<<endl
    <<"8. Znajdź wartość największą w wierszu"<<endl
    <<"9. Znajdź wartość najmniejszą w kolumnie"<<endl
    <<"10. Znajdź wartość najmniejszą w wierszu"<<endl
    <<"11. Znajdź wartość średnią w kolumnie"<<endl
    <<"12. Znajdź wartość średnią w wierszu"<<endl
    <<"13. Wyjdz z programu"<<endl<<endl
    <<"Wybieram opcje numer: "<<endl;


}
//********************************

int pobierz_wybor (int wybor) {
		cin>>wybor;
		cout<<endl<<endl;

	return wybor;
}

//********************************

int wykonaj_wybor (int wybor, Tablica arr) {
		int wartosc;
		wybor = pobierz_wybor(wybor);

		switch (wybor) {
			case 1: 		//Uzupelnij caly arkusz
        			 zapis_tablica (&arr); 
    			break;

			case 2: 		//Wyswietl caly arkusz
				 wyswietlanie_tablica (arr); 
    			break;

			case 3: 		//Wystwietl zawartosc komorki

   			break;

			case 4: 		//Wpisz wartosc do komorki
			/*	cin >> wartosc;
				ustaw_wartosc (arkusz,ilosc_wierszy,ilosc_kolumn,wartosc); */
   			break;

			case 5: 		//Sumuj według kolumn
				int ktora_kolumna;

				cout << "Ktora kolumne zsumowac?" << endl;
				cin >> ktora_kolumna;
				suma_kolumny (arr, ktora_kolumna);
    			break;

			case 6: 		//Sumuj według wierszy
				int ktory_wiersz;

				cout << "Ktory wiersz zsumowac?" << endl;
				cin >> ktory_wiersz;
				suma_wiersze (arr, ktory_wiersz);
    			break;

			case 7:			//Znajdź wartość największą w kolumnie
			break;

			case 8: 		//Znajdź wartość największą w wierszu
    			break;

			case 9: 		//Znajdź wartość najmniejszą w kolumnie
    			break;

			case 10: 		//Znajdź wartość najmniejszą w wierszu
    			break;

			case 11: 		//Znajdź wartość średnią w kolumnie
    			break;

			case 12: 		//Znajdź wartość średnią w wierszu
    			break;

			case 13: exit(0);
    			break;
			default: cout<<"Nie ma takiej opcji"<<endl<<endl;
		}

return 0;	
}

//*********************************

void petla_menu(Tablica arr, int wybor){

		for(;;) {

		   drukuj_menu();
		   wykonaj_wybor(wybor, arr);
		   cout<<endl;

		}

}
