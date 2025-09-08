#include <stdio.h>
int somme (int a,int b) 
{
    int  result = a+b ;
    printf("%d",result) ;
    
    return result ;

}
int main ()
{
    int a,b ;
 printf("write two number") ;
 scanf("%d",&a) ;
 scanf("%d",&b) ;
 somme(a,b) ;

 

}