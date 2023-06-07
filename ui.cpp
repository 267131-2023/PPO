#include "ui.h"
#include "student.h"
#include "person.h"
#include "list.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <string>

using namespace std;

void ui() {
	List List;
	int choice;
	string x;
	int y;

	while (true) {
		cout << "=====-MENU-=====" << endl;
		cout << "1.Dodaj studenta" << endl;
		cout << "2.Dodaj pracownika" << endl;
		cout << "3.Wyswietl liste" << endl;
		cout << "4.Wyswietl liste pracownikow" << endl;
		cout << "5.Zakoncz" << endl;
		cout << "================" << endl;
		cout << endl;
		cin >> choice;


		switch (choice) 
		{
		case 1:
		{
			Student s;
			cout << "Podaj imie: ";
			cin >> x;
			s.setName(x);
			cout << "Podaj nazwisko: ";
			cin >> x;
			s.setSurname(x);
			cout << "Podaj pesel: ";
			cin >> x;
			s.setPesel(x);	
			cout << "Podaj index: ";
			cin >> y;
			s.setIndex(y);
			List.addPerson(&s);
		}
		break;
		case 2:
		{
			Employee w;
			cout << "Podaj imie: ";
			cin >> x;
			w.setName(x);
			cout << "Podaj nazwisko: ";
			cin >> x;
			w.setSurname(x);

			cout << "Podaj pesel: ";
			cin >> x;
			while (x.length() != 11) {
				cout << "Zly pesel, wprowadz jeszcze raz: ";
				cin >> x;
			}
			w.setPesel(x);

			cout << "Podaj stanowisko: ";
			cin >> x;
			w.setPosition(x);
			cout << "Podaj numer karty: ";
			cin >> y;
			w.setCardNumber(y);
			List.addPerson(&w);
		}
			
		break;
		case 3:
		{
			List.pierwsza();
			List.druga();
		}
			
		break;
		case 4:
		{
			
		}
			
		break;
		case 5:
			exit(0);
		break;

	
		}
		
	}
}
