#include <stdio.h>
int main ()
{
    int tab[]={1,2,3} ;
    int tab2[3];
    for (int i = 0; i < 3; i++)
    {
        tab2[i] = tab[i] ;
    }
    for (  int i = 0; i < 3; i++)
    {
        printf("le tableau 1 %d le tableau 2 %d\n ",tab[i],tab2[i]) ;
    }
    
     
} 