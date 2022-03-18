#include<iostream>
using namespace std;


void Input(int array[], int size ) {

    for (int i=0; i<size ; i++ ) {
        cout<< "Enter the "<< i<<" element: ";
        cin>> array[i];
    }
}

int sum(int array[], int size ) {

    int sum =0;

    for(int i=0; i< size ; i++ ) {

        sum = sum + array[i];
    }

    return sum;
}

int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>> size;

    int rajesh[size];

    Input(rajesh, size) ;

    cout<< "The sum of all the array elements is: "<< sum( rajesh, size ) ;
}