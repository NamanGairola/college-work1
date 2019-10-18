#include<stdio.h>
int main()
{
 int m,i,j,n,r;
 printf("Enter array size\n");
 scanf("%d%d",&m,&n);
 int M[m][n];
 printf("Enter elements of array\n");
 for(i=0;i<m;i++)
 {
     for(j=0;j<n;j++)
     {
         scanf("%d",&M[i][j]);
     }
 }  
 printf("how many time to rotate this array\n");
 scanf("%d",&r);
 r=r%4;
if(r==1 || r==3)
{
 for(i=0;i<n;i++)
 {
     for(j=0;j<m;j++)
     {    if(r==1)
         printf("%d ",M[m-1-j][i]);
         else
         printf("%d ",M[j][n-1-i]);
     }
     printf("\n");
 }
}
else if(r==2 || r==0)
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(r==0)
            printf("%d ",M[i][j]);
            else
            printf("%d ",M[m-1-i][n-1-j]);
        }
        printf("\n");
    }
}
 return 0; 
}