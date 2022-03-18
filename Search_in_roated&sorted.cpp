#include<iostream>
using namespace std;

int GetPivot (int arr[], int n) {

    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while ( start < end) {

        if( arr[mid ] >= arr[0]) {
            start = mid +1;
        }
        else {
            end = mid;
        }

        mid = start + (end - start)/2;

    }

    return start ;
}

int BinarySearch (int arr[], int n, int key ) {

    int start =0;
    int end =n -1;

    int mid = start + (end - start)/2;

    while (start <= end ) {

        if( arr[mid]== key ) {
            return mid;
        }

        else if( key > arr[mid]) {
            start = mid +1;
        }
        else if( key < arr[mid]) {
            end = mid -1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main () {
    int arr[8] = {12, 14, 18, 1, 3, 6, 9, 11};
    int key = 3;
    int n = 8;

    int Pivot = GetPivot(arr, 8);

    if( key >= arr[Pivot] && key < arr[n-1] ) {
        int index = BinarySearch(arr, 8, 3);
        cout<<"The key is present at address: " <<index;
    }

    else {
        BinarySearch( arr, 8, 3);
        int index = BinarySearch(arr, 8, 3);
        cout<<"The key is present at address: " <<index;
    }
    
    return 0;
}