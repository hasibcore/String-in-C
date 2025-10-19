/*Write a C program to take a string as input. Then convert each character of the string to uppercase.
Input:
Input String: Hello World
Output:
Output String: HELLO WORLD */
#include<stdio.h>
int main()
{
    int i;
    char s1[100];
    printf("string :");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='a' && s1[i]<='z' )
        {
            s1[i]=s1[i]-32;
        }
    }
    printf("Output string :");
    puts(s1);
}
