#include<stdio.h>
int main()
{
    int n;
    float area;
    printf("enter number");
    scanf("%d",&n);
    if(n%5==0)
    {
        area=n*n;
        printf("Area of the square:");
        printf("%f",area);
    }
    else
    {
        area=3.14*n*n;
        printf("Area of circle:");
        printf("%f",area);
    }
    return 0;
}
