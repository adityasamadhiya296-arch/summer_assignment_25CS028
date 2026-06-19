#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 40;
    int low = 0, high = n - 1;
    int found = 0;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(!found) {
        printf("Element not found");
    }

    return 0;
}