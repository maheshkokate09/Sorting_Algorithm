#include<iostream>
using namespace std;

void merge(int *arr, int start, int end) {
    // Calculate mid index
    int mid = start + (end - start) / 2;

    // Calculate lengths of two subarrays
    int len1 = mid - start + 1;
    int len2 = end - mid;


    // Create temporary arrays to store the subarrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy data to temporary arrays first[] and second[]
    int mainarrayindex = start;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainarrayindex++];
    }

    mainarrayindex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainarrayindex++];
    }

    // Merge the two subarrays back into the main array
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = start;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainarrayindex++] = first[index1++];
        } else {
            arr[mainarrayindex++] = second[index2++];
        }
    }

    // Copy the remaining elements of first[], if there are any
    while (index1 < len1) {
        arr[mainarrayindex++] = first[index1++];
    }

    // Copy the remaining elements of second[], if there are any
    while (index2 < len2) {
        arr[mainarrayindex++] = second[index2++];
    }

    // Deallocate memory for temporary arrays
    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int start, int end) {
    // Base case: If the array has one or zero elements, it is already sorted
    if (start >= end) {
        return;
    }

    // Calculate mid index
    int mid = start + (end - start) / 2;

    // Recursively sort the two halves
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);

    // Merge the sorted halves
    merge(arr, start, end);
}

int main() {
    // Sample array
    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    // Call the mergesort function
    mergesort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
