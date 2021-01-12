#include <stdio.h>
 
#include <math.h>
 
int main() {
 
        char c;
 
        int letter, space, digit, other;
		printf("Input: ");
 
        letter = 0; space = 0; digit = 0; other = 0;
 
        while ((c = getchar()) != '\n') {
 
                if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
 
                        letter++;
 
                else if (c == ' ')
 
                        space++;
 
                else if ('0' <= c && c <= '9')
 
                        digit++;
 
                else
 
                        other++;
 
        }
		printf("Output:\n");
 
        printf("%d %d %d %d\n", letter, space, digit, other);
 
        return 0;
 
}
