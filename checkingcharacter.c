#include<stdio.h>
int main()
{
 char ch;
 printf("Enter any character\n");
 scanf("%c",&ch);
 if(ch>='0' && ch<='9')
        printf("digit");
 else if(ch>='a' && ch<='z')
    printf("Alphabet small case");
 else if(ch>='A' && ch<='Z')
    printf("Alphabet capital case");
 else
    printf("Special character");
    return 0;
}
