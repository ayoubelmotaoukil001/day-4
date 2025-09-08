#include <stdio.h>
int main ()
{
    int i,num,s=0 ;
    printf("write the size of an array") ;
    scanf("%d",&num) ;
    int arr[num] ;
     printf("write his elemnts");
    for (  int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]) ;
       
    }
    for ( i = 0; i < num; i++)
    {
        s+=arr[i] ;
       
    }
     printf("the sum is %d",s) ;

}
