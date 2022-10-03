/*
Съставете алгоритъм и напишете програма, която въвежда от клавиатурата два низа, съставени 
от главни латински букви, всеки с дължина най-много 15 знака. Ако двата низа имат поне една 
обща буква, програмата трябва да отпечата хоризонтално на екрана първия от низовете, а 
втория - вертикално, без да има празни позиции между буквите им, така че двата низа да се 
пресекат там, където общата буква се среща за първи път и в двата низа. Ако двата низа нямат 
нито една обща буква, тогава програмата трябва да отпечата хоризонтално първия низ, а от 
позицията, непосредствено намираща се под позицията следваща след последната буква на 
първия низ - да отпечата вертикално надолу втория низ.
*/

#include<iostream>
#include<cctype>

using namespace std;

int main(){
    char Word[15][15];
    char FWord[15];
    char SWord[15];
    char w, check = false;
    int a = 0, b = 0;
    for(int i = 0; i < 15; i++){
        FWord[i]='\0';
        SWord[i]='\0';
        for (int j = 0; j < 15; j++)
        {
            Word[i][j]='\0';
        }
    }
    cout << "Insert first word: "; cin >> FWord;
    cout << "Insert second word: "; cin >> SWord;
    for(int i = 0; i < 15; i++){
        w = toupper(FWord[i]);
        FWord[i] = w;
        w = toupper(SWord[i]);
        SWord[i] = w;
    }
    do{
        for(int i = 0; i < 15; i++){
            for(int j = 0; j < 15; j++){
                if(FWord[j]==SWord[i]&&FWord[j]!='\0'&&SWord[i]!='\0'){
                    a = j;
                    b = i;
                    check = true;
                }
            }
        }
    }while(check!=true);
    for(int i = 0; i < 15; i++){
        Word[i][b]=FWord[i];
    }
    for (int i = 0; i < 15; i++)
    {
        Word[a][i]=SWord[i];
    }
    for(int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++)
        {
            if(Word[i][j]=='\0'){
                cout << " ";
            }else{
                cout << Word[i][j];
            }
        }
        
    }
    
    cout << Word << endl;
}