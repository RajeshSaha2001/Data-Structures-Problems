#include<iostream>
using namespace std;
void SeparatePositiveAndNegative(int arr[], int n){
    int size = sizeof(arr)/sizeof(arr[0]);
    int Index = 0;
    for(int i=0; i< n; i++){
        if(arr[i]< 0){
            swap(arr[i],arr[Index]);
            Index++;
        }
    }
}
void printArray(int arr[], int n){
    // int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i< n; i++){
        cout<< arr[i]<<" ";
    }
    
}
int main(){
    int arr[5] = {-2,8,9,-6,10};
    SeparatePositiveAndNegative(arr,5);
    printArray(arr, 5);

}