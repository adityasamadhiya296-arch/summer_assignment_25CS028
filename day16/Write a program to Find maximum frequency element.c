#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxFreq = 0, maxElement = arr[0];

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d\n", maxElement);
    printf("Frequency = %d", maxFreq);

    return 0;
}