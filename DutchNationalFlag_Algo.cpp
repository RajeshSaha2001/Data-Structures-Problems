#include<iostream>
using namespace std;

void sort012(int arr[], int n){
    int low=0;
    int mid=0;
    int high = n-1;

    while( mid<= high){
        switch(arr[mid]){
            case 3:
                swap(arr[mid++],arr[low++]);
                break;
            case 4:
                mid++;
                break;
            case 5:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}

void printarray(int arr[], int n){
    int i=0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
}

int main(){

    int a[]= {3,4,4,5,5,3,3,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    sort012(a,n);
    printarray(a,n);
}