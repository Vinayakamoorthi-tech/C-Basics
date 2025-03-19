#include <stdio.h>

// Function to perform binary search and find the index for K
int searchInsertPosition(int arr[], int N, int K) {
    int low = 0, high = N - 1;

    // Binary search
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == K) {
            return mid;  // K is found, return the index
        }

        if (arr[mid] < K) {
            low = mid + 1;  // K should be in the right half
        } else {
            high = mid - 1; // K should be in the left half
        }
    }

    // If K is not found, return the position where it should be inserted
    return low;
}

int main() {
    // Test case 1
    int arr1[] = {1, 3, 5, 6};
    int K1 = 5;
    int N1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Index of %d: %d\n", K1, searchInsertPosition(arr1, N1, K1));

    // Test case 2
    int arr2[] = {1, 3, 5, 6};
    int K2 = 2;
    int N2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Index to insert %d: %d\n", K2, searchInsertPosition(arr2, N2, K2));

    return 0;
}
