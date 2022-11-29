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

void SortArray(int *A, int m){
    int i, j, k, min;
    for(i = 0; i < m - 1; i++) {
        k = i;
        for(j = i + 1; j < m; j++) {
            if (A[j] < A[k]) {
                k = j;
            }
            if (k > i)
            {
                min = A[k];
                A[k] = A[i];
                A[i] = min;
            }
        }
    }
}

void FindPayOptions(int A[], int n, int m, int k) {
    // nai-golqmoto chislo ot masiva da se sravni s sumata koqto trqbva da se zaplati (N) 
    // ako chisloto e po-malko ot sumata se izvajda ot neq i tursum chisloto v masiva
    // ako nqma takova chislo shte namalim s edna edinica i shte tursim pak
    int curr_num, a = 0, count = 0;
    int i, j, z;
    for (int i = m-1; i > 0; i--){
        if (A[i] < n) {
            curr_num = n - A[i];
        }
        for (int j = 0; j < 0; j++)
        {
            if (A[j] == curr_num)
            {
                /* code */
            }
            
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

    SortArray(A, m);
    for (int i = 0; i < m; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    FindPayOptions(A, n, m, k);
    
}