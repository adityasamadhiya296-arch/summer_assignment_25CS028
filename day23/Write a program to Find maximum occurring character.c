#include <stdio.h>

int main() {
    char str[] = "programming";
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    int max = 0;
    char maxChar;

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum Occurring Character: %c\n", maxChar);
    printf("Frequency: %d\n", max);

    return 0;
}