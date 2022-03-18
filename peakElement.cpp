#include<iostream>
using namespace std;
int peakElement(int arr[], int n){
    int start =0;
    int end =n-1;
    int mid = start + (end - start)/2;

    while(start <= end ){
        if(mid > 0 && mid < n-1 ){
            if(arr[mid]> arr[mid+1] && arr[mid]> arr[mid-1]){
                return mid;
            }

        }

        if(mid == 0){
            if(arr[mid]> arr[mid+1]){
                return 0;
            }
            else {
                return 1;
            }
        }

        if(mid = n-1){
            if(arr[mid]> arr[n-2]){
                return n-1;
            }
            else {
                return n-2;
            }
        }
    }
}
int main(){

    int a[5] = {7 ,8 ,9, 6, 4};
    int k = peakElement(a, 5);
    cout<<"The peak element is "<< k;
    return 0;

}