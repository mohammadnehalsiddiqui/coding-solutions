# Array Reversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array, of size $n$, reverse it.

Example: If array, $arr = [1, 2, 3, 4, 5]$, after reversing it, the array should be, $arr = [5, 4, 3, 2, 1]$.

**Input Format**

The first line contains an integer, $n$, denoting the size of the array.
The next line contains $n$ space-separated integers denoting the elements of the array.

**Constraints**

$ 1 \le n \le 1000$  
$ 1 \le arr_i \le 1000$, where $arr_i$ is the $i^{th}$ element of the array.

**Output Format**

The output is handled by the code given in the editor, which would print the array.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-26T07:04:34.211Z  

```c
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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/reverse-array-c/problem)