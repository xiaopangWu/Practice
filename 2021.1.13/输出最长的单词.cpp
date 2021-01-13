#include <stdio.h>
#include <string.h>
int main() {
        void calc(char str[], char longest[]);
        char str[101], longest[101];
		printf("Please input a sentence:\n");
        gets(str);
        calc(str, longest);
		printf("Output:\nThe longest word is:");
        puts(longest);
        return 0;
}
void calc(char str[], char longest[]) {
        char temp[101];
        int l = 0, ret = 0;
        while (sscanf(str + l, "%s", temp) != EOF) {
                if (strlen(temp) > ret) {
                        ret = strlen(temp);
                        strcpy(longest, temp);
                }
                l += strlen(temp);
        }
} 
