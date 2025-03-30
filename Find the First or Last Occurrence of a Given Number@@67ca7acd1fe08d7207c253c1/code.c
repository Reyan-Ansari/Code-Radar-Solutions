#include <stdio.h>
int findOccurence(int arr[], int n, int target, char mode) {
    switch (mode) {
        case 'F': // Find First Occurrence
            for (int i = 0; i < n; i++) {
                if (arr[i] == target) {
                    return i; // No need for break
                }
            }
            return -1; // Return -1 if target not found

        case 'L': // Find Last Occurrence
            for (int i = n - 1; i >= 0; i--) {
                if (arr[i] == target) {
                    return i; // No need for break
                }
            }
            return -1; // Return -1 if target not found

        default:
            return -1; // Invalid mode
    }
}