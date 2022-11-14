/* 
Text here
*/

#include<iostream>

using namespace std;

void SortArray(float *a, int n) {
    int i, j, spot;
    float temp_num;
    for (i = 0; i < n - 1; i++){
        spot = i;
        for (j = i + 1; j < n; j++){
            if (a[j] < a[spot]){
                spot = j;
            }
            if (spot > i){
                temp_num = a[spot];
                a[spot] = a[i];
                a[i] = temp_num;
            }
            
        }
    }
}

int main() {
    int n;
    cout << "Insert elements count: ";
    cin >> n;
    float array[n];

    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << " :";
        cin >> array[i];
    }

    SortArray(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}
