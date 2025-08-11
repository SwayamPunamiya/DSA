//The first value is considered to be the initial sorted part of the array.
//Every value after the first value must be compared to the values in the sorted part of the algorithm so that it can be inserted into the correct position.
//The Insertion Sort Algorithm must run through the array 4 times, to sort the array of 5 values because we do not have to sort the first value.
//And each time the algorithm runs through the array, the remaining unsorted part of the array becomes shorter.

//We start with the second element of the array as the first element is assumed to be sorted.
//Compare the second element with the first element if the second element is smaller then swap them.
//Move to the third element, compare it with the first two elements, and put it in its correct position
//Repeat until the entire array is sorted.

#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){ 
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
