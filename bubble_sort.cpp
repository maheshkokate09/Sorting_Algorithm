#include<iostream>
using namespace std;

void sortit(int arr[],int n) {
  
 for(int i=1; i<n; i++) {

        for(int j=0; j<n-i; j++) {

            if(arr[j]>arr[j+1]) {
                
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i= 0; i<n; i++) {
        cout<<arr[i];
    }
}
int main() {

 int arr[5] = {1,4,3,2,5};

sortit(arr,5);


}