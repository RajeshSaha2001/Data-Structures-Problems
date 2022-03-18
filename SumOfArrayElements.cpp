#include<iostream>
using namespace std;

int main() {

    int sum =0;

    int rajesh[6] = {0,1,2,3,4,5};

    for(int i=0; i<6 ;i++) {

        sum = rajesh[i] + sum ;
    }

    cout<<"The sum of all the elements in the array is: "<< sum << endl;
}