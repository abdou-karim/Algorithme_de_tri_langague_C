//
// Created by abdou on 5/25/2024.
//

#include "tri.h"
void triSelection(int arr[], int n, bool croissant) {
    for (int i = 0; i < n - 1; i++) {
        int extremeIndex = i;
        for (int j = i + 1; j < n; j++) {
            if ((croissant && arr[j] < arr[extremeIndex])
            || (!croissant && arr[j] > arr[extremeIndex])) {
                extremeIndex = j;
            }
        }
        int temp = arr[extremeIndex];
        arr[extremeIndex] = arr[i];
        arr[i] = temp;
    }
}


void triInsertion(int arr[], int n, bool croissant) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && ((croissant && arr[j] > key)
        || (!croissant && arr[j] < key))) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void triBulle(int arr[], int n,  bool croissant) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-1; j++) {
            if ((croissant && arr[j] > arr[j + 1]) ||
            (!croissant && arr[j] < arr[j + 1])) {

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


