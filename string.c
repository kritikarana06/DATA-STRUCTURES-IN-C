#include <stdio.h>

void main()
{
    
    char str[100];
    printf("enter the string:\n");
    gets(str);
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(i==0)
        {
            printf("%c",str[i]);
        }
        else if(str[i]==' ')
        {
            printf("%c",str[i+1]);
        }
    }
    
}
