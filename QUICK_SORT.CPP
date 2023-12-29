#include<iostream>
using namespace std;

int position(int *arr,int s,int e) {

    int pivot = arr[s];
    int count = 0;

    for(int i=s+1; i<=e; i++) {
       if(arr[i] <= pivot) {
        count++;
       }
    }

    int pivottindex = s + count;
    swap(arr[pivottindex],arr[s]);


    int i = s, j = e;

    while(i < pivottindex && j > pivottindex) {

        while(arr[i] <= pivot) {
            i++;
        }

        while( arr[j] > pivot) {
            j--;
        }

        if(i < pivottindex && j > pivottindex) {
            swap(arr[i++],arr[j--]);
        }
    }

    return pivottindex;


}
void quicksort(int *arr, int s,int e) {
   
   if(s >= e) 
       return ;

    int p = position(arr,s,e);

    quicksort(arr,s,p-1);

    quicksort(arr,p+1,e);
}
int main() {
   
    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;


    
    quicksort(arr, 0, n - 1);

    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}