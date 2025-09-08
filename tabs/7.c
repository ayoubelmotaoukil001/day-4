#include<stdio.h>
int main ()
{
    int arr[]={1,4,3} ;
    int i, j;
   
   int temp ;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            if (arr[j]>arr[j+1])
            {
              temp=arr[j] ;
              arr[j]=arr[j+1] ;
              arr[j+1]=temp ;
            }
            
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        printf("%d",arr[i]) ;
    }
    
    
}