#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];
    char temp[50];

    printf("Enter 5 names:\n");
    for (int i = 0; i < 5; i++)
        scanf("%s", names[i]);

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in Alphabetical Order:\n");
    for (int i = 0; i < 5; i++)
        printf("%s\n", names[i]);

    return 0;
}