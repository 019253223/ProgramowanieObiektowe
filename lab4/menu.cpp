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

int wykonaj_wybor (int wybor, Tablica *tab) {
		int wartosc;
		wybor = pobierz_wybor(wybor);

		switch (wybor) {
			case 1: 		//Uzupelnij caly arkusz
        			 tab->zapis_tablica (); 
    			break;

			case 2: 		//Wyswietl caly arkusz
				//tab->wyswietlanie_tablica (); 
    			break;

			case 3: 		//Wystwietl zawartosc komorki

   			break;

			case 4: 		//Wpisz wartosc do komorki
		
   			break;

			case 5: 		//Sumuj według kolumn
				int ktora_kolumna;

				cout << "Ktora kolumne zsumowac?" << endl;
				cin >> ktora_kolumna;
				tab->suma_kolumny (ktora_kolumna);
    			break;

			case 6: 		//Sumuj według wierszy
				int ktory_wiersz;

				cout << "Ktory wiersz zsumowac?" << endl;
				cin >> ktory_wiersz;
				tab->suma_wiersze (ktory_wiersz);
    			break;

			case 7:			//Znajdź wartość największą w kolumnie
				cout << "W ktorej kolumnie znalezc wartosc najwieksza?" << endl;
				cin >> ktora_kolumna;
				tab->maksimum_kolumny (ktora_kolumna);
			break;

			case 8: 		//Znajdź wartość największą w wierszu
				cout << "W ktorym wierszu znalezc wartosc najwieksza?" << endl;
				cin >> ktory_wiersz;
				tab->maksimum_wiersze (ktory_wiersz);
    			break;

			case 9: 		//Znajdź wartość najmniejszą w kolumnie
				cout << "W ktorej kolumnie znalezc wartosc najmniejsza?" << endl;
				cin >> ktora_kolumna;
				tab->minimum_kolumny (ktora_kolumna);
    			break;

			case 10: 		//Znajdź wartość najmniejszą w wierszu
				cout << "W ktorym wierszu znalezc wartosc najmniejsza?" << endl;
				cin >> ktory_wiersz;
				tab->minimum_wiersze (ktory_wiersz);				
				
    			break;

			case 11: 		//Znajdź wartość średnią w kolumnie
				cout << "Dla ktorej kolumny obliczyc wartosc srednia?" << endl;
				cin >> ktora_kolumna;
				tab->srednia_kolumny (ktora_kolumna);

    			break;

			case 12: 		//Znajdź wartość średnią w wierszu
				cout << "Dla ktorego wiersza obliczyc wartosc srednia?" << endl;
				cin >> ktory_wiersz;
				tab->srednia_wiersze (ktory_wiersz);
    			break;

			case 13: exit(0);
    			break;
			default: cout<<"Nie ma takiej opcji"<<endl<<endl;
		}

return 0;	
}

//*********************************

void petla_menu(Tablica tab, int wybor){

		for(;;) {

		   drukuj_menu();
		   wykonaj_wybor(wybor, &tab);
		   cout<<endl;

		}

}
