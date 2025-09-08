#include <stdio.h>
int max(int a,int b) 

{
    if (a>b)
    {
        printf("%d estnplus grand que %d ",a,b) ;
    }else if (a<b)
    {
        printf("%d est plus grand  %d ",b,a) ;
    }
    
    return max ;

}
int main ()
{
    int x,y ;
    printf("write teo number") ;
    scanf("%d",&x) ;
    scanf("%d",&y) ;
    max(x,y) ;
}

