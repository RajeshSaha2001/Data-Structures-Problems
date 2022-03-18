/* #include<iostream>
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
        cout<< arr[i] <<" ";
    }
}

int main() {

    int even[6] = { 21, 5 , 29, 99, 8, 10};

    int odd[5] = { 20, 14, 33, 55, 60} ;

    swap(even, 6) ;
    swap(odd, 5) ;

    printArray(even, 6) ;

    cout<<endl;
    
    printArray(odd , 5) ;


}



#include<iostream>
using namespace std;

void Input( int arr[], int size) {
    for(int i=0; i< size; i++) {
        cout<<"Enter the"<< i <<"element";
        cin>> arr[i];
    }
}

int ArraySum (int arr[], int size) {
    int sum =0;
    for(int i=0; i< size; i++) {
        sum = arr[i] + sum;
    }

    return sum;
}

int main() {

    int rajesh[5] = {};

    Input(rajesh, 5);
    cout<<endl;
    ArraySum(rajesh, 5);
} */

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