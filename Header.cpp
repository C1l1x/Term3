/*
Zadacha
*/

#include <string>
#include <iostream>

using namespace std;

class type{



};


int main() {
	char Input = true;

    
	do {
		cout << "";
		cout << "";
		cout << "";
		cout << "";
		cout << " 0 - for exit.\n";
		cout << "Insert number: "; cin >> Input;
		switch (Input) {
		case '0':Input = false; break;
		case '1':break;
		case '2':break;
		case '3':break;
		case '4':break;

		default: cout << "You insert wrong number.\n";
		}
	} while (Input != false);

}