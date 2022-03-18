#include<iostream>
using namespace std;

void rotateArray(int arr[], int n, int d){
    int i =0;
    for(int j=0; j<n; j++){
        if( j >= d){
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
}

int main(){

    int arr[10] = {2,4,6,8,10,12,14,16,18,20};
    rotateArray(arr, 10 , 3);
    printArray(arr, 10);
}