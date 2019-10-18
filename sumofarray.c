#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter array size\n");
    scanf("%d",&m);
    scanf("%d",&n);
    int M1[m][n],M2[m][n];
    printf("Enter elements of first array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&M1[i][j]);
        }
    }
      printf("Enter elements of second array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&M2[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",M1[i][j]+M2[i][j]);
        }
        printf("\n");
    }
    return 0;
}