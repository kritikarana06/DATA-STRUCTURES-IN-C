#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    printf("Enter the string: \n");
    gets(s);
    int i=0,c=0;
    while(s[i]!='\0')
    {
        if(s[i]==','||s[i]=='.')
        {
            c++;
        }
        i++;
    }
    printf("\nThe frequency of punctuation marks is %d ",c);
}