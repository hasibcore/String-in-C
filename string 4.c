/*Write a program in C that will reverse a string.
Input :
Input String: Hello
Output:
Output String: olleH */

#include<stdio.h>
#include<string.h>
int main()
{
    int len=0;
    char str[30];
    printf("Input string: ");
    scanf("%s",str);
    printf("output string: ");
    printf("%s",str);
    strrev(str);
printf("\nOutput String:");
puts(str);
}
//without library
#include<stdio.h>
int main()
{
    int len=0,i;
    char str[30];
    printf("Input string: ");
    scanf("%s",str);
    while(str[len]!='\0')
    {
        len++;
    }
    printf("\nOutput String:");
    for(i=len-1;i>=0;i--)
    {
         printf("%c",str[i]);
    }
}
