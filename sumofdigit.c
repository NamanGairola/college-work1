#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        sum=sum+n%10;
    }
    printf("%d",sum);
    return 0;
}
