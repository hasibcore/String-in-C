/* 8. Write a C program to find out if a string is a substring of another string or not.
Input :
Input String1: Hello World
Input String2: orl
Output:
orl is a substring of Hello World */
#include<stdio.h>
int main()
{
    int i,j;
    char s1[100],s2[100],found=0;
    printf("Enter 1st string :");
    gets(s1);
    printf("Enter 2nd string :");
    gets(s2);
    for(i=0;s1[i]!='\0';i++)
    {
        for(j=0;s2[j]!='\0';j++)
            {
               if(s1[i+j]!=s2[j])
               {
                   break;
               }
            }
            if(s2[j]=='\0')
            {
             found=1;
            }
    }
    if (found == 0)
        printf("%s is NOT a substring of %s\n", s2, s1);
    else
        printf("%s is a substring of %s\n", s2, s1);
}
