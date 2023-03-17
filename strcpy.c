#include<stdio.h>
#include<string.h>
int main( )
{
   char str1[ ] = "I love programming" ;
   char str2[20]= "" ;
   printf ( "source string(i.e str1) = %s\n", str1 ) ;
   printf ( "dest string(i.e str2) = %s\n", str2) ;
   strcpy ( str2, str1 ) ;
   printf ( "target( i.e str2) string after strcpy( ) = %s\n", str2 ) ;
   return 0;
}
