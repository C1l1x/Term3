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
    char Result[15][15];
    char Word1[15];
    char Word2[15];
    char Clear;
    bool check = false;
    int a = 0, b = 0, c=0, count = 0;
    for(int i = 0; i < 15; i++){
        Word1[i]='\0';
        Word2[i]='\0';
        for (int j = 0; j < 15; j++)
        {
            Result[i][j]='\0';
        }
    }

    cout << "Insert first word: "; cin >> Word1;
    cout << "Insert second word: "; cin >> Word2;

    for(int i = 0; i < 15; i++){
        Clear = toupper(Word1[i]);
        Word1[i] = Clear;
        Clear = toupper(Word2[i]);
        Word2[i] = Clear;
    }

    for (int i = 0; i < 15; i++)
    {
        if (Word1[i]!='\0')
        {
            count++;
        }
        
    }
    

    do{
        for (int i = 0; i < 15; i++)
        {
            if(Word1[i]==Word2[c]&&Word1[i]!='\0'&&Word2[c]!='\0'){
                a = i;
                b = c;
                check = true;
            }
        }
        c++;
    }while(a==0&&c!=14);

    if(check==true){
        for(int i = 0; i < 15; i++){
            Result[b][i] = Word1[i];
        }
        for (int i = 0; i < 15; i++)
        {
            Result[i][a] = Word2[i];
        }
        for(int i = 0; i < 15; i++){
            for (int j = 0; j < 15; j++){
                if(Result[i][j]=='\0'){
                    cout << " ";
                }else{
                    cout << Result[i][j];
                }
            }cout << "\n";
            
        }
    }
    if(check==false){
        for (int i = 0; i < 15; i++)
        {
            Result[0][i] = Word1[i];
        }
        for (int i = 0; i < 15; i++)
        {
            Result[i+1][count] = Word2[i];
        }
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 15; j++)
            {
                if (Result[i][j]=='\0')
                {
                    cout << " ";
                }else{
                    cout << Result[i][j];
                }
                
            }cout << "\n";
            
        }
        

        
    }
}