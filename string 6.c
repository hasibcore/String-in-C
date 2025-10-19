/*Write a C program to find out how many words are present in a string.
Input :
Input String: Hello World
Output:
There are 2 words. */
#include<stdio.h>
int main()
{
    int i=0,count=0;
    char s1[100];
    printf("string :");
    gets(s1);
    int z=strlen(s1);
 while(s1[i]!='\0')
 {
     if(s1[i]==' ')
     {
         count++;
     }
     i++;
 }
 printf("\nThere are %d words.",count+1);
}
