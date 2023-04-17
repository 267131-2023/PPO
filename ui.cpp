#pragma once
#include <iostream>
#include "ui.h"
#include "person.h"
#include <string>
#include <vector>

using namespace std;

void ui() {

	while (1) {
		cout << "=====-_Menu_-=====" << endl;
		cout << "1. Dodaj student" << endl;
		cout << "2. Usuñ student" << endl;
		cout << "3. Lista studentow" << endl;
		int choice;
		cin >> choice;

		menuChoice(choice);
	}
}

void menuChoice(int choice) {

	switch (choice) 
	{
		case: 1 :
		{
			Student s1;
			string x;
			cout << "Podaj imie: ";
			cin >> x;
			s1.setName(x);
			cout << "Podaj nazwisko: ";
			cin >> x;
			s1.setSurname(x);
			cout << "Podaj pesel: ";
			cin >> x;
			s1.setPesel(x);
			cout << "Podaj indeks: ";
			cin >> x;
			s1.setIndex(x);
		}
		case: 2 :
		{
			cout << "1. Znajdz po numerze indeksu" << endl;
			cout << "2. Znajdz po numerze pesele" << endl;
			cin << choice;
			switch (choice)
			{
			case 1: {
				cout << "podaj indeks, aby wyszukac:  ";
				int index;
				cin >> index;
				Stud
			}
			}
		}
	}
	
	

}