#include <iostream>

using namespace std;

int main(){
    int ele_count; 
    cout << "Insert elements count: ";
    cin >> ele_count; // Взимаме брия на елементите в масива
    int array[ele_count], i, j;
    for (i = 1; i <= ele_count; i++){
        cout << "Element " << i  << " :";
        cin >> array[i]; // задаваме стойност на елементите в масива
    }
    int check;
    do{
        check = 0;
        for (i = 1; i < ele_count; i++)
        // търсим по-малкото число
            if (array[i] > array[i + 1]){
                int new_array;
                new_array = array[i]; // запазваме числото 
                array[i] = array[i + 1]; // местим по-малкото число в началото на масива
                array[i + 1] = new_array; 
                check = 1;
            }
    } while (check);
    for (i = 1; i <= ele_count; i++)
        cout << array[i] << " "; // изкарваме числата от низходящ ред
    cout << "\n";
}