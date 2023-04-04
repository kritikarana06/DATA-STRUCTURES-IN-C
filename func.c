#include<stdio.h>
int swap(int *x,int *y)
{
    int x,y;
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return 0;
    
}
void main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d\n%d",&a,&b);
    swap(&a,&b);
    printf("a= %d and b= %d",a,b);
    
    
}