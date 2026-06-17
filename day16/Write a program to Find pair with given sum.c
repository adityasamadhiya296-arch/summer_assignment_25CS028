#include <stdio.h>

int main() {
    int arr[] = {2, 4, 3, 5, 7, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 7;

    printf("Pairs with sum %d are:\n", sum);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}