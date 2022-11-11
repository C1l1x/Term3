/*
    Даден е списък от символни низове. Да се напише програма, която намира броя на низовете със
зададена дължина и създава нов списък, съдържащ само низовете с дължина, по-малка от зададената.
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string Input, Result;
    int len, same_len = 0;

    cout << "Insert text: ";
    getline(cin, Input);
    Input += ' ';
    cout << "Insert length: ";
    cin >> len;

    int max_len = Input.length(), len_count = 0, curr_len = 0, word_len = 0, word_start = 0, word_end = 0;

    while (len_count <= max_len)
    {
        if (Input[len_count]!=' ')
        {
            len_count++;
        }else
        {
            curr_len = len_count - word_len;
            
            if (curr_len == len)
            {
                same_len++;
            }else if (curr_len <= len)
            {
                word_start = word_len;
                word_end = curr_len;
                Result += Input.substr(word_start, word_end);
                Result += ' ';
            }
            len_count++;
            word_len = len_count;
        }
    }

    cout << "Words with " << len << " length is: " << same_len << "\n";
    cout << "New array with less than " << len << " length: " << Result << "\n";
    
}