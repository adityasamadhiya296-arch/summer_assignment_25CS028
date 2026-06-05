#include <stdio.h>
int main()
{
    int n,i,factorial=1;
    printf("Enter the number factorial:");
    scanf("%d",&n);
    for (i=1;i<=n;i++) 
    {
        factorial *=i;
    }
    printf("Factorial is: %d",factorial);
    return 0;
}
