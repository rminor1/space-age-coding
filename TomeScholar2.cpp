// TomeScholar2.cpp : Defines the entry point for the console application.
//

// TomeScholarMenu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

void registration(string* un, string* pw, string fn, string ln, string dob, string c, string s, string uvn, string m, int mf) {

	cout << "Enter username: " << endl;
	std::getline(std::cin, *un);

	cout << "Enter password: " << endl;
	std::getline(std::cin, *pw);

	cout << "Enter your first name: " << endl;
	std::getline(std::cin, fn);

	cout << "Enter your last name: " << endl;
	std::getline(std::cin, ln);

	cout << "Enter your date of birth: " << endl;
	std::getline(std::cin, dob);

	cout << "Enter your country: " << endl;
	std::getline(std::cin, c);

	cout << "Enter your state: " << endl;
	std::getline(std::cin, s);

	cout << "Enter your university's name: " << endl;
	std::getline(std::cin, uvn);

	cout << "Enter your major: " << endl;
	std::getline(std::cin, m);

}

void login(string un, string pw){

	string un2, pw2;

	cout << "Welcome Back!" << endl;

	cout << "username: " << endl;
	std::getline(std::cin, un2);

	cout << "password: " << endl;
	std::getline(std::cin, pw2);

	if (un == un2 && pw == pw2)
	{
		cout << "Login is correct" << endl;
	}

	else
	{
		cout << "Login was incorrect, please try again" << endl;
	}
}

void Search(){

string book;
string choice;
string bookA, bookB, bookC, bookD, bookE;


cout << "Search Books: " << endl;
std::getline(std::cin, book);

if (book == "ComputerScience")
{
	cout << "Make your choice: " << endl;
	std::getline(std::cin, choice);

	if (choice == "bookA")
	{
		cout << "1. Basics of Computer Science by Vera Cruz" << endl;
	}

	if (choice == "bookB")
	{
		cout << "2. Intro To Python Programming Vol.1 by George Franks" << endl;
	}

	if (choice == "bookC")
	{
		cout << "3. Intro to Python Programming Vol.2 by Michael Yang" << endl;
	}
	
	if (choice == "bookD")
	{
		cout << "4. Intro to Java Programming by Aleyah Marie" << endl;
	}
	
	if (choice == "bookE")
	{
	cout << "5. Intro to C++ Programming by Greg Davis" << endl;
	}
}

if (book == "History")
{
	cout << "Make your choice: " << endl;
	std::getline(std::cin, choice);

	if (choice == "bookA")
	{
		cout << "1. World History 101 by Jim Stevens" << endl;

	}
	
	if (choice == "bookB")
	{
		cout << "2. World History 102 by Joseph Green" << endl;
	}

	if (choice == "bookC")
	{
		cout << "3. Ancient History by Dean Simmons" << endl;
	}

	if (choice == "bookD")
	{
		cout << "4. Introduction to European Civilization by Kevin Smith" << endl;
	}

	if (choice == "bookE")
	{
		cout << "5. History of the United States by Lester Rogers" << endl;
	}
}

if (book == "Languages")
{
	cout << "Make your choice: " << endl;
	std::getline(std::cin, choice);

	if (choice == "bookA")
	{
		cout << "1. Spanish 101 by Vince Richards" << endl;
	}

	if (choice == "bookB")
	{
		cout << "2. Spanish 102 by Candice Harris" << endl;
	}

	if (choice == "bookC")
	{
		cout << "3. Spanish Composition Through Literature by Owen Williams" << endl;
	}

	if (choice == "bookD")
	{
		cout << "4. Spanish for Health Care by Larry Udonis" << endl;
	}

	if (choice == "bookE")
	{
		cout << "5. Experience Spanish by Kevin Nas" << endl;
	}
}

if (book = "Mathematics")
{
	cout << "Make your choice: " << endl;
	std::getline(std::cin, choice);

	if (choice == "bookA")
	{
		cout << "1. Mathematics and Its Applications by Sean Webb" << endl;
	}
		
	if (choice == "bookB")
	{
		cout << "2. Calculus I by Bernard Johnson" << endl;
	}

	if (choice == "bookC")
	{
		cout << "3. Algebra I by May Minnifurd" << endl;
	}

	if (choice == "bookD")
	{
		cout << "4. Algebra II w/ Trig by Brian Kinnings" << endl;
	}

	if (choice == "bookE")
	{
		cout << "5. Calculus III by Morris Adams" << endl;
	}
}


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
		cout << "Option 7 - Review" << endl;

		string option;
		std::getline(std::cin, option);

		if (option == "1")
		{
			registration(&un, &pw, fn, ln, dob, c, s, uvn, m);
		}

		if (option == "2")
		{
			login(un, pw);
		}

		if (option == "3")
		{
			Search();
		}

		if (option == "4")
		{
			string 
		}

		if (option == "5")
		{

		}

		if (option == "6")
		{
			string cardNumber;
			string expDate;
			string name;
			string secCode;
			string streetAddress;
			string zipCode;
			int cn;

			cout << "Enter the card number: " << endl;
			std::getline(std::cin, cardNumber);

			cout << "Enter the expiration date: " << endl;
			std::getline(std::cin, expDate);

			cout << "Enter the name listed on the card: " << endl;
			std::getline(std::cin, name);

			cout << "Enter the street address associated with the card: " << endl;
			std::getline(std::cin, streetAddress);

			cout << "Enter the zipcode associated with the card: " << endl;
			std::getline(std::cin, zipCode);

			cout << "Enter the security code listed on the back: " << endl;
			std::getline(std::cin, secCode);

			cout << "Your payment information has been registered" << endl;

			cn = cardNumber.length();
			{
				if (cn != 16)
				{
					cout << "Card Declined" << endl;
				}

				if (cn == 16)
				{
					cout << "Card Accepted" << endl;
				}
			}

		}

		if (option == "7")
		{
			
		}
	}
	system("pause");
	return 0;
}



