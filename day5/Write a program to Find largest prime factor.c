#include <stdio.h>

int main() {
    int n, largestPrimeFactor = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n % 2 == 0) {
        largestPrimeFactor = 2;
        n /= 2;
    }

    for(int i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            largestPrimeFactor = i;
            n /= i;
        }
    }

    if(n > 2)
        largestPrimeFactor = n;

    printf("Largest Prime Factor = %d", largestPrimeFactor);

    return 0;
}
