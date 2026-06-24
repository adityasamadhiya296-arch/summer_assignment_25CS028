#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "ABCD";
    char str2[] = "CDAB";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not Rotation\n");
        return 0;
    }

    char temp[100];
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2))
        printf("Rotation\n");
    else
        printf("Not Rotation\n");

    return 0;
}