#include <stdio.h>

int main() {
    int n, index = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Store non-zero elements first
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0)
            result[index++] = arr[i];
    }

    // Fill remaining with 0
    while(index < n)
        result[index++] = 0;

    printf("Array after moving zeroes to end:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
