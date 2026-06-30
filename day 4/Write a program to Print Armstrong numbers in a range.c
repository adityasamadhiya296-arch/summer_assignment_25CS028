#include <stdio.h>

int main() {
    int start, end, num, temp, digit, sum;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers are:\n");

    for(num = start; num <= end; num++) {

        temp = num;
        sum = 0;

        while(temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}