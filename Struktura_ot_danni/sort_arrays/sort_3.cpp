/* 
Sortirane na ednomeren masif po algoruma Quicksort
*/

#include<iostream>

using namespace std;

void QuickSort(float *x, int n) {
    int i = 0, j = n - 1;
    float y = x[j/2], z;
    do {
        while (x[i] < y){
            i++;
        }
        while (x[j] > y){
            j--;
        }
        if (i < j) {
            z = x[i];
            x[i] = x[j];
            x[j] = z;
        }else {
            if (i==j) {
                i++;
                j--;
            }
            break;
        }
    } while (++i < --j);

    for (int k = 0; k < n; k++) {
    if (j > 0)
        QuickSort(x, j+1);      // x[0], ..., x[j]
    
    if (i < n-1) 
        QuickSort(x+1, n-i);    // x[i], ..., x[n-1]
    
    }
}

int main() {
    float a[] = {1.2, 8.5, 0.3, 4.3, 0.1, 5.5, 0.7, 3.2, 8.1, 3.3, 4.5, 9.5};
    cout << "\n";
    QuickSort(a, 12);
    for (int i = 0; i < 12; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}