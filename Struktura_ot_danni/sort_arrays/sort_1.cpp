/*
Sortira ednomeren masiv po algoritama za sortirane chrez selekciq
*/

#include <iostream>

using namespace std;

void SelSort(float *x, int n){
    int i, j, k;
    float min;
    for (i = 0; i < n - 1; i++){
        k = i;
        for (j = i + 1; j < n; j++){
            if (x[j] < x[k]){
                k = j;
            }
            if (k > i){
                min = x[k];
                x[k] = x[i];
                x[i] = min;
            }
        }
    }
}

int main(){
    float a[] = {1.2, 8.5, 0.3, 4.3, 0.1, 5.5, 0.75, 3.2, 8.1, 3.3, 4.5, 9.5, 2.7, 7.3, 3};
    SelSort(a, 15);
    for (int i = 0; i < 15; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

