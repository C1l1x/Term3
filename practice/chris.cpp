/* 
Vuv vulshebvnata strana horata izpolzvat moneti sys stoinost A1, A2, ..., Am. Edin vulsheben chovek otishul v magazin
i ustanovil, che ima tochno po dve moneti ot vseki vid. Toi trqbva da zaplati suma N. Napishete programa, koqto da opredeli
dali vulshebniq chovek moje da zaplati tazi suma bez da mu vrushtat resto.

Input:
    Na purviq red na standartniq vhod sa zapisani chislata N (1 <= N <= 10^9) i M(1 <= M <= 15), a na vtoiriq chislata
A1, A2, ..., Am (1 <= Ai <= 10^9), vsichki razlichni.

Output:
    Na edin red na standartniq izhod izvedete chisloto K - broi na monetite, s koito vulshebiqt chovek shte plati nujnata 
suma, bez resto. Na sledvashtiq red izvedete K chisla - stoinosti na monetite. Ako ima nqkolko resheniq, izvedete tova, v 
koeto vulshebniqt chovek shte dade nai-malko moneti. Ako ima nqkolko takiva resheniq, izvedete koe da e ot tqh. Ako ne e 
vuzmojno zaplashtane bez resto, izvedete chisloto 0. Ako puk vulshebniqt chovek nqa dostatuchno pari, za da zaplati 
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


// A - stoinost na moneti
// N - suma koqto trqbva da zaplati
// M - broi na monetite ot edin vid
// K - broi na monetite

#include <iostream>

using namespace std;

void FindPayOptions(int A[], int n, int m, int k) {
    int summ = 0;
    bool check = true;
    int i = 0;
    while (check == true && i != m) {
        for (i = 0; i < m; i++)
        {
            summ = A[i] + A[i+1];
            if (summ <= n)
            {
                if (summ == n)
                {
                    k = 2;
                    cout << k << endl;
                    cout << A[i] << " " << A[i+1] << endl;
                    check = false;
                    break;
                }
                if (summ + A[i+2] <= n)
                {
                    if (summ + A[i+2] == n)
                    {
                        k = 3;
                        cout << k << endl;
                        cout << A[i] << " " << A[i+1] << " " << A[i+2] << endl;
                        check = false;
                        break;
                    }
                }
                summ = 0;    
            }
        }
    }
    if(check == true) {
        for (int i = 0; i < m; i++) {
            summ += A[i];
        }   
        if (summ > n)
        {
            cout << -1 << "\n";
        }else if (summ < n)
        {
            cout << 0 << endl;
        }
    }
}


int main() {
    int n, m, k = 0;
    cout << "\nInsert amount to be paid: ";
    cin >> n;
    cout << "Insert number of coins of one type: ";
    cin >> m;
    m += m;
    int A[m];

    for (int i = 1; i < m; i++)
    {
        cout << "Insert coin value: ";
        cin >> A[i];
        A[i-1] = A[i];
        i++;
    }

    FindPayOptions(A, n, m, k);
    
}