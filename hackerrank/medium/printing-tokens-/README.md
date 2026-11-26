# Array Reversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a sentence, $s$, print each word of the sentence in a new line.

**Input Format**

The first and only line contains a sentence, $s$.

**Constraints**

$ 1 \le len(s) \le 1000$  

**Output Format**

Print each word of the sentence in a new line.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-26T07:05:05.962Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/printing-tokens-/problem)