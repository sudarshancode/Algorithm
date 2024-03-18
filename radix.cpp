#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int size, int pos) {
    int count[10] = {0}; // Initialize count array to all zeros
    int count_sum[10] = {0}; // Initialize count_sum array to all zeros

    for(int i = 0; i < size; i++) {
        int index = (arr[i] / pos) % 10;
        count[index]++;
    }

    count_sum[0] = count[0];
    for(int i = 1; i < 10; i++) {
        count_sum[i] = count_sum[i - 1] + count[i];
    }

    int output[size];
    for(int i = size - 1; i >= 0; i--) {
        int index = (arr[i] / pos) % 10;
        count_sum[index]--;
        output[count_sum[index]] = arr[i];
    }

    for(int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}

int getMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void radixSort(int arr[], int size) {
    int max = getMax(arr, size);

    for(int pos = 1; (max / pos) > 0; pos *= 10) {
        countSort(arr, size, pos);
    }

    cout << "Sorted array:";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {12, 43, 10, 6, 9, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, size);
    return 0;
}
