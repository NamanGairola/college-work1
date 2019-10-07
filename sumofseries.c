#include<stdio.h>
int main()
{
    int r,i,n,sum1=0,sum2=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum1=sum1+i*i;
    }
     for(i=2;i<=n;i=i+2)
    {
        sum2=sum2+i*i;
    }
    r=sum1-sum2;
    printf("%d",r);
    return 0;
}
