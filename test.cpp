#include<iostream>
using namespace std;

void PrintArray (int abc[], int size) {

    for (int i=0; i < size; i++) {
        cout<< abc[i]<<" ";
    }
    cout<< endl;
}

void Reverse (int xyz[], int size) {

    for( int i=0; i<size; i+=2){

        if(i+1 < size ) {
        /* swap( xyz[i], xyz[i+1]); */

        xyz[i] = xyz[0];
        int temp = xyz[0];
        xyz[0] =  temp;
    }
    }
}

int main () {

    int arr[8] = {21,56,8,74,23,41,50,32};
    int brr[5]= {11,89,54,11,23};

    Reverse(arr, 8);
    Reverse (brr, 5);

    PrintArray(arr, 8);
    PrintArray(brr, 5);
}