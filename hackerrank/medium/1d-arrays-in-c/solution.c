#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    // Read the size of the array
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    // Dynamically allocate memory for n integers on the heap
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1; // Exit if memory allocation fails
    }

    // Read n space-separated integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Iterate through the array and calculate the sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the result
    printf("%d\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
