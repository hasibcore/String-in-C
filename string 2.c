/* 2.Write a C program that will check whether two strings are the same or not.
Input:
1st String: Hello
2nd String: World
Output:
Hello and World are not the same. */
#include<stdio.h>
int main()
{
    int len1=0,len2=0,i;
    char s1[100],s2[100];
    printf("1st string :");
    gets(s1);
    printf("2nd string:");
    gets(s2);
    for(i=0;s1[i]!='\0';i++)
    {
        len1++;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        len2++;
    }
    if(len1!=len2)
    {
        printf("%s and %s are not the same",s1,s2);
    }
    else
    {
            int z=0;
        while(s1[i]!=s2[i])
        {
            z=1;
        }

        if(z==1)
        {
            printf("%s and %s are not the same",s1,s2);
        }
        else
            {
            printf("%s and %s are the same",s1,s2);
            }
}
}
