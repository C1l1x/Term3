/* 
sortira ednomeren masiv po algorituma za sortirane chrez razmqna
*/

#include<iostream>

using namespace std;

void ChangeSort(float *x, int n) {
    int i, k, right = n-1;
    float y;
    while (right > 0) {
        k = 0;
        for (i = 0; i < right; i++) {
            if (x[i+1] < x[i]) {
                y = x[i];
                x[i] = x[i+1];
                x[i+1] = y;
                k = i;
            }
        }
        right = k;
    }
}

int main() {
    float a[] = {1.2, 8.5, 0.3, 4.3, 0.1, 5.5, 0.75, 3.2, 8.1, 3.3, 4.5, 9.5, 2.7, 7.3, 3.3};
    ChangeSort(a, 15);

    for (int i = 0; i < 15; i++)
        cout << a[i] << " ";
    cout << "\n";
}