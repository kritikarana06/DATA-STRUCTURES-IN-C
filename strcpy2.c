#include<stdio.h>
void main()
{
    char s1[5];
    char s2[5];
    printf("enter the string \n");
    scanf("%[^\n]s",s1);
    int i=0;
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
        
    }
    s2[i]='\0';
    printf("%s",s2);
}