#include<stdio.h>
int main()
{
    int n,i;
    printf("multiplication table of=");
    scanf("%d",&n);
    printf("Multiplication table of %d is:\n",n);
    for (i=0;i<=10;i++) 
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}