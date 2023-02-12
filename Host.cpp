#include"Main_Menu.h"
#include "Host.h"
#include <iostream>
#include <Windows.h>
#include <vector>
#include <regex>
#include <map>
using namespace std;
Host::Host(string name, string email, string password, int age, string nationality, string gender, string FavouritColor)
	:User(name, email, password, age, nationality, gender, FavouritColor) {
}
Host::~Host() {

}
Host::Host() {

}
void Host::DisplayHost() {

	cout << "Name  :" << name << endl;
	cout << "Email :" << email << endl;
	cout << "Password :" << password << endl;
	cout << "Nationality :" << nationality << endl;
	cout << "Age :" << age << endl;
	cout << "Gender :" <<gender << endl;
}
void Host::addPlace() {
	string typeofplace, address, city;
	int id, price, numofGuests, numofRooms;
	date from, to;
	bool reserved = false;
	int choice;
	cout << "Enter The Type of The place  [1: Apartment   2: Villa   3: Hostel ]\n\n";
	cin >> choice;
	cout << endl << endl;
	if (choice == 1) typeofplace = "Apartment";
	else if (choice == 2) typeofplace = "Villa";
	else if (choice == 3) typeofplace = "Hostel";
	cout << "Enter City                               \n\n";
	cin >> city;
	cout << endl << endl;
	cout << "Enter place Price                        \n\n";
	cin >> price;
	cout << endl << endl;
	cout << "Enter Start Date (DD/MM/YY):             \n\n";
	cin >> from.d >> from.m >> from.y;
	cout << endl << endl;
	cout << "Enter End Date (DD/MM/YY):               \n\n";
	cin >> to.d >> to.m >> to.y;
	cout << endl << endl;
	cout << "Enter The Address of the Place           \n\n";
	cin >> address;
	cout << "Enter The number of Guests               \n\n";
	cin >> numofGuests;
	cout << endl << endl;
	cout << "Enter the number of Rooms                \n\n";
	cin >> numofRooms;

	Place tmp2(typeofplace, city, address, from, to, price, numofGuests,numofRooms);
	Main_Menu::places.push_back(tmp2);
}

