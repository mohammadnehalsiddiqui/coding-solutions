#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    if (s == NULL) {
        return 1;
    }

    // Read the entire line including spaces until a newline
    if (scanf("%[^\n]", s) == 1) {
        // Reallocate to exact length + 1 for the null terminator
        int len = 0;
        while (s[len] != '\0') {
            len++;
        }
        char *resized = realloc(s, (len + 1) * sizeof(char));
        if (resized != NULL) {
            s = resized;
        }

        // Print each word on its own line
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == ' ') {
                printf("\n");
            } else {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }

    free(s);
    return 0;
}
