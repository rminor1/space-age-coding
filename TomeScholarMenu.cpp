﻿// TomeScholarMenu.cpp : Defines the entry point for the console application.
//

/*THIS CODE IS A WORK IN PROGRESS*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
	int option;
	string un, un2, pw, pw2, book, fn, ln, dob, c, s, uvn, m;

	cout << "Welcome to Tome Scholar Online!" << endl;
	cout << "How may we help you today?: " << endl;
	cout << "Main Menu" << endl;

	while (true)
	{
		cout << "Option 1 - Create Account" << endl;
		cout << "Option 2 - Sign In" << endl;
		cout << "Option 3 - Search for book" << endl;
		cout << "Option 4 - View Cart" << endl;
		cout << "Option 5 - Check out" << endl;
		cout << "Option 6 - Payment Method" << endl;
		cout << "Option 7 - Return to Main Menu" << endl;

		cout << "sdfgsdgdfgdfgdfg" << endl;

		cin >> option;

		if (option == 1)
		{

			cout << "Enter username: " << endl;
			cin >> un;

			cout << "Enter password: " << endl;
			cin >> pw;

			cout << "Enter your first name: " << endl;
			cin >> fn;

			cout << "Enter your last name: " << endl;
			cin >> ln;

			cout << "Enter your date of birth: " << endl;
			cin >> dob;

			cout << "Enter your country: " << endl;
			cin >> c;

			cout << "Enter your state: " << endl;
			cin >> s;

			cout << "Enter your university's name: " << endl;
			cin >> uvn;

			cout << "Enter your major: " << endl;
			cin >> m;
		}

		if (option == 2)
		{
			cout << "Welcome Back!" << endl;

			cout << "username: " << endl;
			cin >> un2;

			cout << "password: " << endl;
			cin >> pw2;

			if (un == un2 && pw == pw2)
			{
				cout << "Login is correct" << endl;
			}

			else if (un != un2 || pw != pw2)
			{
				cout << "Login was incorrect, please try again" << endl;
			}
		}

		if (option == 3)
		{
			cout << "Search Books: " << endl;
			cin >> book;

			if (book == computer science)
			{
				cout << "1. Basics of Computer Science by Vera Cruz" << endl;
				cout << "2. Intro To Python Programming Vol.1 by George Franks" << endl;
				cout << "3. Intro to Python Programming Vol.2 by Michael Yang" << endl;
				cout << "4. Intro to Java Programming by Aleyah Marie" << endl;
				cout << "5. Intro to C++ Programming by Greg Davis" << endl;
			}

			if (book == History)
			{
				cout << "1. World History 101 by Reginald" << endl;
				cout << "2.World History 102 by Reginald Minor" << endl;
				cout << "3.Ancient History by Reginald Minor" << endl;
				cout << "4. Introduction to European Civilization by Reginald Minor" << endl;
				cout << "5. History of the United States by Reginald Minor" endl;
			}

			if (Foreign Languages)
			{
				cout << "1. Spanish 101 by Reginald Minor" << endl;
				cout << "2. Spanish 102 by Reginald Minor" << endl;
				cout << "3. Spanish Composition Through Literature by Reginald Minor" << endl;
				cout << "4. Spanish for Health Care by Reginald Minor" << endl;
				cout << "5. Experience Spanish by Reginald Minor" << endl;
			}

			if (Mathmatics)
			{
				cout << "1. by Reginald Minor" << endl;
				cout << "2. by Reginald Minor" << endl;
				cout << "3. by Reginald Minor" << endl;
				cout << "4. by Reginald Minor" << endl;
				cout << "5. by Reginald Minor" << endl;
			}

			if (Health)
			{
				cout << "1. by Reginald Minor" << endl;
				cout << "2. by Reginald Minor" << endl;
				cout << "3. by Reginald Minor" << endl;
				cout << "4. by Reginald Minor" << endl;
				cout << "5. by Reginald Minor" << endl;
			}

			if (Fine Arts)
			{
				cout << "1. by Reginald Minor" << endl;
				cout << "2. by Reginald Minor" << endl;
				cout << "3. by Reginald Minor" << endl;
				cout << "4. by Reginald Minor" << endl;
				cout << "5. by Reginald Minor" << endl;
			}

			if (Economics)
			{
				cout << "1. by Reginald Minor" << endl;
				cout << "2. by Reginald Minor" << endl;
				cout << "3. by Reginald Minor" << endl;
				cout << "4. by Reginald Minor" << endl;
				cout << "5. by Reginald Minor" << endl;
			}

			if (Psychology)
			{
				cout << "1. by Reginald Minor" << endl;
				cout << "2. by Reginald Minor" << endl;
				cout << "3. by Reginald Minor" << endl;
				cout << "4. by Reginald Minor" << endl;
				cout << "5. by Reginald Minor" << endl;
			}

			if (Engineering)
			{
				cout << "1. by Reginald Minor" << endl;
				cout << "2. by Reginald Minor" << endl;
				cout << "3. by Reginald Minor" << endl;
				cout << "4. by Reginald Minor" << endl;
				cout << "5. by Reginald Minor" << endl;
			}

			if (Criminal Justice)
			{
				cout << "1. by Reginald Minor" << endl;
				cout << "2. by Reginald Minor" << endl;
				cout << "3. by Reginald Minor" << endl;
				cout << "4. by Reginald Minor" << endl;
				cout << "5. by Reginald Minor" << endl;
			}
		}

	}

	return 0;
}

