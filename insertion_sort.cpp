#include<iostream>
using namespace std;
void sortit(int arr[],int n) {
 
 for(int i=1; i<n; i++) {

    int temp =arr[i];
    int j=i-1;

   while(arr[j]>temp && j>=0) {
      arr[j+1] =arr[j];
      j--;
   }
    arr[j+1] = temp;
 }

 for(int i= 0; i<n; i++) {
        cout<<arr[i];
    }
   
}
int main() {

 int arr[5] = {1,4,3,2,5};

sortit(arr,5);

}