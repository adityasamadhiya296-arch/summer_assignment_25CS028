#include <stdio.h>

int main() {
    char str[] = "swiss";
    int visited[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[(unsigned char)str[i]]) {
            printf("First Repeating Character: %c\n", str[i]);
            return 0;
        }
        visited[(unsigned char)str[i]] = 1;
    }

    printf("No Repeating Character Found\n");

    return 0;
}