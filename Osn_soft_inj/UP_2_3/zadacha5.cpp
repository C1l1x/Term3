/*
Да се състави алгоритъм и напише програма, която въвежда от клавиатурата няколко думи, написани на
един ред и разделени с един интервал. След това програмата намира и извежда най-дългата дума от въведените.
Ако има няколко най-дулги думи, извежда ги всичките.
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string words;
    
    cout << "Insert words: "; getline(cin, words);

    int max_len = words.length(), maxWord_len = 0, word_len = 0, len_count = 0, word_start = 0, check;


    while(len_count <= max_len){
        if (words[len_count]!=' ')
        {
            len_count++; 
        }else{
            int curr_len = len_count - word_len;

            if(curr_len > maxWord_len){
                maxWord_len = curr_len;
                word_start = word_len;
                check = maxWord_len;
            }
            len_count++;
            word_len = len_count;
        }
        
    }

    word_len = 0, len_count = 0, word_start = 0;

    while(len_count <= max_len){
        if (words[len_count]!=' ')
        {
            len_count++; 
        }else{
            int curr_len = len_count - word_len;

            if(curr_len == maxWord_len){
                word_start = word_len;
                cout << words.substr(word_start, maxWord_len) << "\n";
            }
            len_count++;
            word_len = len_count;
        }
        
    }
}