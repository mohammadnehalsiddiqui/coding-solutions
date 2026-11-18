#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 100

int main() 
{
    char ch;
    char s[MAX_LEN];
    char sentence[MAX_LEN];

    // Read the character
    scanf("%c", &ch);
    
    // Read the single-word string
    scanf("%s", s);
    
    // Consume the leftover newline character from the previous input
    scanf("\n");
    
    // Read the full sentence (including spaces)
    scanf("%[^\n]%*c", sentence);

    // Print the outputs on separate lines
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sentence);

    return 0;
}
