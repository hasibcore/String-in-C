/* 1. Write a C program to take a string as input. Then print the string along with its length .
Input:
Input String: Hello
Output:
Output String: Hello 5 */
#include<stdio.h>
int main()
{
    int len=0;
    char str[30];
    printf("Input string: ");
    scanf("%s",str);
    printf("output string: ");
    printf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
      len++;
    }
    printf(" %d",len);
}
