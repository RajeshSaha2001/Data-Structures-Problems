
#include <iostream>
using namespace std;

int fisrtOcc( int arr[], int size, int key ) {
    int s = 0, e = size -1, ans =-1;
    int mid = s + (e-s)/2;
    while( s<=e ) {

        if( arr[mid] == key ) {
            ans = mid;
            e = mid -1;
        }

        else if( key < arr[mid]) {
            e = mid -1;
        }

        else if ( key > arr[mid]) {
            s = mid +1;
        }

        mid = s + (e-s)/2;
        
    }

    return ans;
}

int LastOcc( int arr[], int size, int key ) {
      int s = 0, e = size -1, ans =-1;
      int middle = s + (e-s)/2;

        while( s<=e ) {

        if( arr[middle] == key ) {
            ans = middle;
            s = middle + 1;
        }

        else if( key < arr[middle]) {
            e = middle -1;
        }

        else if ( key > arr[middle]) {
            s = middle +1;
        }

        middle = s + (e-s)/2;
        
    }

    return ans;
}

int main() {

    int arr[10] = { 10, 12, 12, 12, 12, 12, 15, 18, 70, 78};

    int first = fisrtOcc(arr, 10, 12);
    int last = LastOcc(arr, 10, 12);

    int count = (last - first)+1;

    cout<< count;

    return 0;
}