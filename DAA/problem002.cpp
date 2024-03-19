#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i <= j) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    if (j > low) {
        swap(arr[low], arr[j]);
    }
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int t = partition(arr, low, high);
        quickSort(arr, low, t - 1);
        quickSort(arr, t + 1, high);
    }
}

int main() {
    int arr[] = {34, 12, 76, 9, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
    return 0;
}
