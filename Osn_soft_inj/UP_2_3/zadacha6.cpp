#include <iostream> 

using namespace std;

int main(){
    int array1[21],array2[21]; 
    int ele_count;
    cout << "Insert element count: ";
    cin >> ele_count;
    while (ele_count>21)
    {
        cout << "Elements should'nt be more than 21!\n";
        cout << "Insert element count: ";
        cin >> ele_count;
    }
    
    int i, j;
    for (i = 1; i <= ele_count; i++)
    {
        cout << "Element " << i << " :";
        cin >> array1[i];
        array2[i] = 0;
        int save_ele = array1[i];
        while (save_ele > 0)
        {
            array2[i] += (save_ele % 10);
            save_ele /= 10;
        }
    }
    int check;
    do
    {
        check = 0;
        for (i = 1; i < ele_count; i++)
            if ((array2[i] > array2[i + 1]) || ((array2[i] == array2[i + 1]) && (array1[i] > array1[i + 1])))
            {
                int save_ele;
                save_ele = array1[i];
                array1[i] = array1[i + 1];
                array1[i + 1] = save_ele;
                save_ele = array2[i];
                array2[i] = array2[i + 1];
                array2[i + 1] = save_ele;
                check = 1;
            }
    } while (check);
    cout << "Result: ";
    for (i = 1; i <= ele_count; i++)
        cout << array1[i] << " ";
    cout << "\n";
}