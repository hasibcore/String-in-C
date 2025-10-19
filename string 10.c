//10.Write a C program to find the number of vowels and consonants present in a string.
#include<stdio.h>
int main()
{
    int i,vow=0,con=0;
    char s[100],ch;
    printf("string :");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        ch=s[i];
        if(ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U'|| ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            vow++;
        }
        else if (ch>='A' && ch<='Z' || ch>='a' && ch<='z')
            {
             con++;
            }
    }
    printf("The number of vowels : %d \n The number of consonant : %d ",vow,con);
}
