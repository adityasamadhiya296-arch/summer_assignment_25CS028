#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C programming language is powerful";

    int maxLen = 0, len = 0;
    int start = 0, maxStart = 0;

    for (int i = 0;; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest Word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);

    printf("\nLength: %d", maxLen);

    return 0;
}