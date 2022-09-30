/*
В РУ има k факултета и n компютурни зали. За всяка зала е известен броя на компютрите и на кой
факултет принадлежи. Да се изведе броя на компютрите за всеки факултет.
*/

#include <string>
#include <iostream>

using namespace std;

class University{
private:
    string Faculty;
    int Rooms;
    int Computers = 0;
    int n;
public:
    University(){

    }
    void getData(){
        cin.ignore();
        cout << "\nInsert faculty name: "; getline(cin, Faculty);
        cout << "Insert number of rooms: "; cin >> Rooms;
        for(int j = 0; j < Rooms; j++){
            int a = 0;
            cout << "Insert computers for " << j+1 << " room: "; cin >> a;
            Computers += a;
        }
    }
    void display(){
        cout << "\nFaculty: " << Faculty << ".\n";
        cout << "Rooms: " << Rooms << ".\n";
        cout << "Sum of computers: " << Computers << ".\n";
    }
};


int main() {
	char Input = true;
    University uni[100];
    int brF = 0;
	do {
		cout << "\n1. Insert data for faculty.\n";
		cout << "2. Display data.\n";
		cout << "0. Exit.\n";
		cout << "Insert number: "; cin >> Input;
		switch (Input) {
		case '0': Input = false; break;
		case '1': uni[brF++].getData();
            break;
		case '2': 
            for(int i = 0; i < brF; i++){
                uni[i].display();
            }
            break;
		case '3':break;
		case '4':break;

		default: cout << "You insert wrong number.\n";
		}
	} while (Input != false);

}