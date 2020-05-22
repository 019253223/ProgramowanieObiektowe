#include<iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;
#include"tablica.h"
#include"menu.h"


int main () {

	Tablica arr;
	arr.ilosc_wierszy = 5;
	arr.ilosc_kolumn = 5;

  	int wybor;

 	arr.arkusz = new int * [arr.ilosc_wierszy];
	
	for (int i = 0; i < arr.ilosc_wierszy; i++) {
	     arr.arkusz[i] = new int [arr.ilosc_kolumn];
	}

	 
    	 cout << "zarezerwowano: " << arr.ilosc_wierszy << endl;
	 cout<< "sizeof: " << sizeof(arr.arkusz) << endl; 

	petla_menu(arr, wybor); 
	

	for (int i = 0; i < arr.ilosc_wierszy; i++) {
	    delete [] arr.arkusz[i];	    
	}
	    delete [] arr.arkusz;

return 0;
}
