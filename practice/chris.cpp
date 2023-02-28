/* 
Vuv vulshebvnata strana horata izpolzvat moneti sys stoinost A1, A2, ..., Am. Edin vulsheben chovek otishul v magazin
i ustanovil, che ima tochno po dve moneti ot vseki vid. Toi trqbva da zaplati suma N. Napishete programa, koqto da opredeli
dali vulshebniq chovek moje da zaplati tazi suma bez da mu vrushtat resto.

Input:
    Na purviq red na standartniq vhod sa zapisani chislata N (1 <= N <= 10^9) i M(1 <= M <= 15), coins_gived na vtoiriq chislata
A1, A2, ..., Am (1 <= Ai <= 10^9), vsichki razlichni.

Output:
    Na edin red na standartniq izhod izvedete chisloto K - broi na monetite, s koito vulshebiqt chovek shte plati nujnata 
suma, bez resto. Na sledvashtiq red izvedete K chisla - stoinosti na monetite. Ako ima nqkolko resheniq, izvedete tova, v 
koeto vulshebniqt chovek shte dade nai-malko moneti. Ako ima nqkolko takiva resheniq, izvedete koe da e ot tqh. Ako ne e 
vuzmojno zaplashtane bez resto, izvedete chisloto 0. Ako puk vulshebniqt chovek nqma dostatuchno pari, za da zaplati 
nujnata suma, izvedete chisloto -1.

User input:     Output:
5   2           3
1   2           1   2   2

User input:     Output:
7   2           0
1   2           

User input:     Output:
5   2           -1
3   4           
*/

#include <iostream>

using namespace std;

void SortArray(int *Money_values, int money_count){
    int i, j, k, min;
    for(i = 0; i < money_count - 1; i++) {
        k = i;
        for(j = i + 1; j < money_count; j++) {
            if (Money_values[j] < Money_values[k]) {
                k = j;
            }
            if (k > i)
            {
                min = Money_values[k];
                Money_values[k] = Money_values[i];
                Money_values[i] = min;
            }
        }
    }
}

void FindPayOptions(int Money_values[], int price, int money_count, int coins_gived[]) {
    int curr_value = 0, count = 0;
    int i, j = 0, temp = 0;
    for (int i = money_count-1; i > 0; i--) {
        if (curr_value < price) {
            curr_value += Money_values[i];
            count++;
            coins_gived[j++] = Money_values[i];
        }
        if (curr_value > price) {
            curr_value -= Money_values[i];
            count--;
            j--;
        }
        if (curr_value == price) {    
            cout << count << "\n";
            for (int i = 0; i < count; i++){
                cout << coins_gived[i] << " ";
            }
            cout << "\n";
            break;
        }
    }
    if (curr_value != price)
    {
        for (int i = 0; i < money_count; i++)
        {
            temp += Money_values[i];
        }
        if (temp < price) {
            cout << -1 << "\n";
        }else {
            cout << 0 << "\n";
        }
        
    }
    
    
    
}

int main() {
    int price, money_count, coins_gived[10];
    cout << "\nInsert amount to be paid: ";
    cin >> price;
    cout << "Insert number of coins of one type: ";
    cin >> money_count;
    money_count += money_count;
    int Money_values[money_count];

    for (int i = 1; i < money_count; i++)
    {
        cout << "Insert coin value: ";
        cin >> Money_values[i];
        Money_values[i-1] = Money_values[i];
        i++;
    }

    SortArray(Money_values, money_count);
    FindPayOptions(Money_values, price, money_count, coins_gived);
    
}

/*
Made by Cilix
*/