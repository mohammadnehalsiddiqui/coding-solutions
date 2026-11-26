#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s = malloc(1024 * sizeof(char));
    if (s == NULL) {
        return 1;
    }

    int freq[10] = {0};

    if (scanf("%1023s", s) == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                freq[s[i] - '0']++;
            }
        }
    }

    for (int d = 0; d < 10; d++) {
        printf("%d ", freq[d]);
    }
    printf("\n");

    free(s);
    return 0;
}
