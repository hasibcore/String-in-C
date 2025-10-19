/* Write a C program to find out whether a string is pallindrome or not.
Sample Input :

Input String: EYE
Sample Output:
Reverse of the string : EYE
EYE is a pallindrome.*/

#include<stdio.h>
int main()
{
    int i,j,count=1,len=0;
    char s[100];
    printf("string :");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
for(i=0;i<len/2;i++)
{
if(s[i]!=s[len-i-1])
{
    count=0;
    break;
}
}
if(count==0)
{
    printf("\n %s is not a pallindrome",s);
}
else
      printf("\n %s is a pallindrome",s);
}
