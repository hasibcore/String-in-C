/*7. Write a C program to find the frequency of each character present in a string.
Input :
Input String: hello
Output:
h appears 1 time(s).
e appears 1 time(s).
l appears 2 times(s).
o appears 1 time(s).*/

#include<stdio.h>
int main()
{
    int i,j,count;
    char s[100];
    printf("string :");
    gets(s);
int z=strlen(s);


for(i=0;s[i]!='\0';i++)
{
     if(s[i]!='0')
    {
       count=1;


        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                count++;
                s[j]='0';
            }
        }
         printf("\n%c appears %d time(s).",s[i],count);
    }

}
}
