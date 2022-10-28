/*
    Даден е списък от символни низове. Да се напише програма, която намира броя на низовете със 
зададена дължина и създава нов списък, съдържащ само низовете с дължина, по-малка от зададената.
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    int count,br=0;
    int length;
    cout << "Insert string counts: "; cin >> count;
    string text[count];
    string result[count];
    for (int i = 0; i < count; i++)
    {
        cout << "String " << i+1 << " :"; cin >> text[i];
    }
    
    cout << "\nInsert max length:"; cin >> length;
    
    for (int i = 0; i < count; i++)
    {
        if (text[i].length()==length)
        {
            cout << "String " << i+1 << " equal to max string " << text[i] << endl;
        }
        else if (text[i].length()<length)
        {
            result[br]=text[i];
            br++;
        }
    }

    cout << "\nThis is new array.\n";

    for (int i = 0; i < br; i++)
    {
        cout << result[i] << endl;
    }
    
}