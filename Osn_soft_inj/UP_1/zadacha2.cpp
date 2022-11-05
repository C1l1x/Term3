/*
Зададен е едномерен масив от цели числа A0, A1,...,An-1. Да се състави алгоритъм и 
напише програма, която създава нов масив a0, a1,..., an-1, като стойността на аi е равна на
средно-аритметично на нечетните цифри на Ai. Предполага се, че във всяко число има поне една нечетна цифра.
*/

#include <iostream>

using namespace std;

int main() {
    int Array[100], result[100], n, a, b, c;

    cout << "Insert how many elements have in the array: "; 
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Element " << i+1 << " :\n"; cin >> Array[i];
    }
    for (int i = 0; i < n; i++){
        a = 0; b = 0; c = 0;
        a = Array[i];
        while(a!=0){
            if ((a%10)%2!=0){
                b += a%10;
                c++;
            }
            a /= 10;
        }
        if(c!=0){
            result[i] = b /= c;
        }else{
            result[i] = 0;
        }   
    }
    for (int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    
}