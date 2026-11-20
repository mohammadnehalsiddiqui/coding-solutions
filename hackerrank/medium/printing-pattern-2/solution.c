#include <stdio.h>

int min2(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int layer = min2(min2(top, bottom), min2(left, right));
            int value = n - layer;

            printf("%d", value);
            if (j < size - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
