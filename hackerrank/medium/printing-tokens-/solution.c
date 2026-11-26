#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *arr, i;
    
    if (scanf("%d", &num) != 1) {
        return 1;
    }
    
    arr = (int *) malloc(num * sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    int left = 0;
    int right = num - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    for (i = 0; i < num; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    
    free(arr);
    return 0;
}
