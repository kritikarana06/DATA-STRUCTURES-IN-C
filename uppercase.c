#include <stdio.h>
#include<string.h>
void main()
{
    char s[100];
    
    fgets(s,100,stdin);
    int i;
    for(i=0;s[i]!='\0';i++)
    {
       if(i%2==0)
       {s[i]=s[i]-32;
       
       }
       
       
       
    
    }
    printf("%s",s);
   
    
}
