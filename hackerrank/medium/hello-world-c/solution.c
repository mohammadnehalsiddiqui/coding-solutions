#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100];
    // Reads a full line of input including spaces into string s
    scanf("%[^\n]%*c", &s);
    
    // Print the required greeting on the first line
    printf("Hello, World!\n");
    
    // Print the input string on the second line
    printf("%s\n", s);
    
    return 0;
}
