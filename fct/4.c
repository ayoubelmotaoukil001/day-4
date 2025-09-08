#include <stdio.h>
int min(int a,int b) 

{
    if (a<b)
    {
        printf("%d estnplus moins que %d ",a,b) ;
    }else if (a>b)
    {
        printf("%d est plus moins  %d ",b,a) ;
    }
    
    return min ;

}
int main ()
{
    int x,y ;
    printf("write two number") ;
    scanf("%d",&x) ;
    scanf("%d",&y) ;
    min(x,y) ;
}

