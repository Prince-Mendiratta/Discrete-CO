#include <iostream>
using namespace std;

void swapping(int &a, int &b){
    //swap the content of a and b
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void display(int *array, int size){
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void selectionSort(int *array, int size){
    int i, j, imin;
    for (i = 0; i < size - 1; i++)
    {
        imin = i; //get index of minimum data
        for (j = i + 1; j < size; j++)
            if (array[j] < array[imin])
                imin = j;
        //placing in correct position
        swap(array[i], array[imin]);
    }
}

int main(){
    int n = 6;
    int arr[] = {10, 7, 8, 9, 1, 5};
    cout << "\nArray before Sorting: ";
    display(arr, n);
    selectionSort(arr, n);
    cout << "\nArray after Sorting: ";
    display(arr, n);
}