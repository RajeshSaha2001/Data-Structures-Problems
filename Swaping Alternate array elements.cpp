#include<iostream>
using namespace std;

void swap(int arr[], int n) {

    for ( int i=0; i<n; i+=2) {
        if( i+1< n) {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray( int arr[], int n) {

    for( int i=0; i<n ; i++ ) {
        cout<< i <<" ";
    }
}

int main() {

    int even[6] = { 21, 5 , 29, 99, 8, 10};

    int odd[5] = { 20, 14, 33, 55, 60} ;

    swap(even, 6);
    swap(odd, 5) ;

    printArray(even, 6) ; 

    cout<<endl;
    
    printArray(odd , 5) ;


}
