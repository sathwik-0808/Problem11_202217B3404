#include <stdio.h>
 
// Function to perform linear search
int linear_search(int arr[], int size, int target) {
    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // Check if the current element matches the target
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    // Return -1 if the target element is not found
    return -1;
}
 
int main() {
    // Example array and target value
    int arr[] = {5, 3, 7, 2, 8, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int target = 8; // The element to search for
 
    // Perform linear search
    int result = linear_search(arr, size, target);
 
    // Print the result of the search
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
 
    return 0;
}