#include <iostream>
using namespace std;

int split(int arr[], int l, int h){
    int x = arr[l];
    int i = l;
    int j = h+1;
    while (i <= j){
        while (x > arr[i]){
            i++;
        }
        while (x < arr[j]){
            j++;
        }
        int arr_i = arr[i];
        int arr_j = arr[j];
        arr[i] = arr_j;
        arr[j] = arr_i;
    }
    arr[i] = x;
    return i;
    cout << arr;
}

void quicksort(int arr[], int l, int h){
    cout << arr;
    int m = split(arr, l, h);
    quicksort(arr, l, m-1);
    quicksort(arr, m+1, h);
}

int main(){
    int arr[] = {7, 3, 5, 4, 2, 9, 4, 2, 1};
    quicksort(arr, 0, sizeof(arr)-1);
    cout << arr;
}