#include<iostream>
using namespace std;
// Code for linear Search
int LinearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key ){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {12,14,16,17,21,25,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the number you wanted to search for: ";
    cin>>key;
    int ans = LinearSearch(arr,n,key);
    if(ans != -1){
        cout<<"The key number is found at "<<ans<<"th index.";
    }
    else {
        cout<<"Your key is not found. Sorry :( ";
    }
}