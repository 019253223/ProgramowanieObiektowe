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
    <<"5. Usun wartosc w komorce"<<endl
    <<"6. Zamiana komorek miejscami"<<endl
    <<"7. Wyjdz z programu"<<endl<<endl
    <<"Wybieram opcje numer: "<<endl;
}
//********************************

int pobierz_wybor (int wybor) {
		cin>>wybor;
		cout<<endl<<endl;

	return wybor;
}

//********************************

int wykonaj_wybor(int wybor, int **arkusz, int rozmiar, int kolumny) {

		wybor = pobierz_wybor(wybor);

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
			case 6: //Zamiana komorek miejscami
    			break;
			case 7: exit(0);
    			break;
			default: cout<<"Nie ma takiej opcji"<<endl<<endl;
		}

return 0;	
}

//*********************************

void petla_menu(int **arkusz, int wybor, int rozmiar, int kolumny){

		for(;;) {

		   drukuj_menu();
		   wykonaj_wybor(wybor, arkusz,rozmiar, kolumny);

		}

}
