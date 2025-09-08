#include <stdio.h>
int main ()
{
    int num ;
    printf("write the size of an array") ;
    scanf("%d",&num) ;
    int arr[num] ;
       printf("write his elemnts");

    for (  int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]) ;
       
    }
     for (  int i = 0; i < num; i++)
    {
        printf("%d\n",arr[i]);
       
    }
    
}