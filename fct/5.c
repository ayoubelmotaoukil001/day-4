#include <stdio.h>
int factorielle (int n )
{
  int   i=1 ;
    int f=1 ;
   if (n==0)
   {
    printf("the result is  1") ;
   }
   for ( i = 1; i <= n; i++)
   {
    f=f*i ;
   }
   
   printf("the result is = %d",f);
   return f ;

}
int main ()
{
    int x ;
    printf("write the numbers that u awnna make his factorieelee") ;
    scanf("%d",&x) ;
    factorielle(x) ;

}