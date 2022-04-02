#include<iostream>
using namespace std;

int reverse(int arr[], int n){
    int start =0;
    int end = n-1;

    while(start <= end ){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    return 0;
}

void printArray( int arr[], int n){
    int i=0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
}

int main(){

    int abc[8] = {2,4,6,8,10,12,14,16};
    reverse(abc, 8);
    printArray(abc, 8);

    return 0;
}