#include<iostream>
using namespace std;

void  sortit(int arr[],int n) {
    
    //sorting
    for(int i=0; i<n-1; i++) {
        int minidex =i;
        for(int j=i; j<n; j++) {

            if(arr[j]<arr[minidex]) {
                minidex = j;
            }
        }
        swap(arr[minidex],arr[i]);
    }

    //printing sorted Array
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

int arr[5] = {1,4,3,2,5};

//function call
sortit(arr,5);

}