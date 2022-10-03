#include<iostream>
#include<cctype>

using namespace std;

int main(){
    char Word[30][30];
    char FWord[15];
    char SWord[15];
    char w, check = false;
    int a = 0, b = 0;
    for(int i = 0; i < 15; i++){
        FWord[i]='\0';
        SWord[i]='\0';
    }
    cout << "Insert first word: "; cin >> FWord;
    cout << "Insert second word: "; cin >> SWord;
    for(int i = 0; i < 15; i++){
        w = toupper(FWord[i]);
        FWord[i] = w;
        w = toupper(SWord[i]);
        SWord[i] = w;
    }
    for(int i = 0; i < 30; i++){
        for (int j = 0; j < 30; j++)
        {
            Word[i][j]='\0';
        }
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