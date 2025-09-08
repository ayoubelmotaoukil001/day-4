
#include <stdio.h>
int main ()
{
    int i,n,f ,result;
    printf("write the size of an array") ;
    scanf("%d",&n) ;
    int arr[n] ;
     printf("write his elemnts\n");
     for (  int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]) ;
       
    }
    printf("write a facteur") ;
    scanf("%d",&f) ;
    
   for ( i = 0; i < n; i++)
   {
    result=f*arr[i] ;

    printf("%d x %d = %d\n ",arr[i],f,result) ;

   }
   

 
}