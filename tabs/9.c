#include<stdio.h>
int main ()
{
  int n,i ;
    printf("write the size of an array") ;
    scanf("%d",&n) ;
    int arr[n] ;

       printf("write his elemnts");

    for (  int i = 0; i < n; i++)
    {  
        scanf("%d",&arr[i]) ;
         
      }
    int tab[n] ;
    for ( i < n; i = 0; i--)
      {
       arr[i] = tab[i] ;
      }
      for ( i = 0; i < n; i++)
      {
        printf("%d",tab[i]) ;
      }
      

}