#include <stdio.h>

int main() {
    char str[] = "swiss";
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First Non-Repeating Character: %c\n", str[i]);
            break;
        }
    }

    return 0;
}