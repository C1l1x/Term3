/*
Петър много обича да решава задачи, които затрудняват неговите съученици. Ето една такава задача:
    Дадени са три цели неотрицателни числа a, b, c. Необходимо е да се подредят в някакъв ред и между тях
да се поставят знаците + (за събиране), - (за изваждане) или * (за умножение), така че 
като се пресметне получения аритметичен израз неговата стойност да е възможно най-малката.
Между всяка двойка съседни числа може да има само един знак. Всеки знак може да се използва само един път.
*/

#include<iostream>

using namespace std;

int main(){
    int a,b,c,result;

    cout << "Insert a: "; cin >> a;
    cout << "Insert b: "; cin >> b;
    cout << "insert c: "; cin >> c; 

    if (a==0&&b==0){
        result = -c;
        cout << result << endl;
    }else if (b==0&&c==0){
        result = -a;
        cout << result << endl;
    }else if (a==0&&c==0){
        result = -b;
        cout << result << endl;
    }
    
    if (a>0&&a<=b){
        if(a<c&&b<=c||a<c&&c<=b){
            result = a-b*c;
            cout << result << endl;
        }   
    }
    if (b>0&&b<=c){
        if(b<a&&a<=c||b<a&&c<=a){
            result = b-a*c;
            cout << result << endl;
        }   
    }
    if (c>0&&c<=a){
        if(c<b&&a<=b||c<b&&b<=a){
            result = c-b*a;
            cout << result << endl;
        }   
    }
    
}