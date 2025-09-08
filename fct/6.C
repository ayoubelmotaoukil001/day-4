#include <stdio.h>
int fibonacci(int n)
{
    int f=0 ;
    int f0 =0  ;
    int f1 =1 ;
    int i ;


      if (n >= 1) {
    printf("%d", f0);
}
    if (n >= 2) {

   printf(" %d", f1); 
}
    for ( i = 2; i <n; i++)
    {
        f=f0+f1 ;
        f0=f1 ;
        f1=f ;
         printf(" %d",f) ;
    }
   

    return f ;
    
} 
int main ()
{
    int x ;
    printf("write a number");
    scanf("%d",&x) ;
    fibonacci(x) ;
}