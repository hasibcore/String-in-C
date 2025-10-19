/*Write a C program to take two strings as input. Then concatenate the two strings.
Input:
1st String: Hello
2nd String: World
Output:
Concatenated String: Hello World
*/
#include<stdio.h>
int main()
{
    int len1=0,len2=0,i;
    char s1[100],s2[100];
    printf("1st string :");
    gets(s1);
    printf("2nd string:");
    gets(s2);
    strcat(s1," ");
    strcat(s1,s2);
    printf("Concatenated String:");
    puts(s1);
}
//without library
#include<stdio.h>
int main()
{
    int len1=0,len2=0,i;
    char s1[100],s2[100];
    printf("1st string :");
    gets(s1);
    printf("2nd string:");
    gets(s2);
    while(s1[len1]!='\0')
    {
        len1++;
    }
    s1[len1]=' ';
    while(s2[len2]!='\0')
    {
        len2++;
    }

    for(i=len1+1;i<len1+len2+1;i++)
    {
        s1[i]=s2[i-(len1+1)];
    }
    s1[i]='\0';
    printf("Concatenated String:");
    puts(s1);
}
