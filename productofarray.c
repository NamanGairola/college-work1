#include<stdio.h>
int main()
{
    int m1,m2,n1,n2,i,j,k,sum;
    printf("Enter size of first array\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter size of second array\n");
    scanf("%d%d",&m2,&n2);
    printf("Enter elements of first array\n");
    int M1[m1][n1],M2[m2][n2];
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&M1[i][j]);
        }
    }
    printf("Enter elements of second array\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&M2[i][j]);
        }
    }
    if(n1==m2)
    {
        for(i=0;i<m1;i++)
        {
            for(k=0;k<n2;k++)
            {
                sum=0;
                for(j=0;j<n1;j++)
                {
                    sum=sum+M1[i][j]*M2[j][k];
                }
                printf("%d ",sum);
            }
            printf("\n");
        }
    }
    else
    printf("Cannot do product");
    return 0;
}