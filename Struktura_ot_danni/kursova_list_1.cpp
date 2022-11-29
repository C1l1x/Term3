/*
    Даден е списък от символни низове. Да се напише програма, която намира броя на низовете със
зададена дължина и създава нов списък, съдържащ само низовете с дължина, по-малка от зададената.
*/

#include <iostream>
#include <list>

using namespace std;

int main() {
    list<string> words;
    list<string> result;
    string cons;
    char space = ' ';
    int n, count = 0;

    cout << "Insert text: ";
    getline(cin , cons);

    int len = cons.size();
    for (int i = 0; i < len; i++){
        int j = i;
        while (cons[i] != space && i < len){
            i++;
        }
        string temp = cons.substr(j, i-j);
        words.push_back(temp);
    }
    
    cout << "Insert word lenght: ";
    cin >> n;

    for(string man : words) {
        if (man.length() == n){
            count++;
        }else if (man.length() < n) {
            result.push_back(man);
        }
    }
    
    cout << "Words with " << n << " length:" << count << "\n";
    cout << "\nThis is first list:\n";
    for(auto i = words.begin(); i != words.end(); ++i) {
        cout << *i << "\n";
    }
    cout << "\nThis is second list:\n";
    for(auto i = result.begin(); i != result.end(); ++i) {
        cout << *i << "\n";
    }

}