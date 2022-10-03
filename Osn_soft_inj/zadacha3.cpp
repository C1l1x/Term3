/*
Zadacha
*/

#include <string>
#include <iostream>

using namespace std;

class Shop{
private:
    int code;
    string name;
    string mark;
    float price, sum;
    int count;
public:
    void getData(){
        cout << "\nInsert code: "; cin >> code;
        cin.ignore();
        cout << "Insert name: "; getline(cin, name);
        cout << "Insert (kg, g, l): "; getline(cin, mark);
        cout << "Insert price: "; cin >> price;
        cout << "Insert count: "; cin >> count; 
    }
    void display(Shop shop[], int brStock){
        for(int i = 0; i < brStock; i++){
            sum += shop[i].count*shop[i].price;
        }
        cout << "\nSum of stocks: " << sum << " BGN\n";
    }
};


int main() {
	char Input = true;
    Shop shop[100];
    int brStock = 0;
    
	do {
		cout << "\n1. Insert data for item.\n";
		cout << "2. Display sum of items.\n";
		cout << " 0 - for exit.\n";
		cout << "Insert number: "; cin >> Input;
		switch (Input) {
		case '0':Input = false; break;
		case '1':
            shop[brStock++].getData();
        break;
		case '2':
            for (int i = 0; i < brStock; i++)
            {
                shop[i].display(shop, brStock);
            }break;

		default: cout << "You insert wrong number.\n";
		}
	} while (Input != false);

}