#include<iostream>
using namespace std;

int TwoSum(int arr, int target, int n){

    int index =0;
    for( int i=0; i< n; i++){
        int sum = arr[index] + arr[i];
        // if(arr[index] + arr[i] = target){
            return index,i;
        }
    }

}

int main(){
    int arr[]= { 2,4,5,7,10} ;
    int target = 17;
    int n = sizeof(arr)/sizeof(arr[0]);
}