#include <stdio.h>


int linearSearch(int arr[], int size, int key) {
    if (size == 0) {
        return -1; 
    }
    if (arr[size - 1] == key) {
        return size - 1; 
    }
    return linearSearch(arr, size - 1, key); 
}

int main() {
    int n, key, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the key to search: ");
    scanf("%d", &key);

    
    int result = linearSearch(arr, n, key);

    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0; 
}

