#include <stdio.h>
 int  length(char str[])
{
    int i,count=0;

    for ( i = 0; str[i] !='\0'; i++)
    {
        count++;
    }
     return count ;
      
}  void inverser_chaine(char str[]) { 

int len = length(str) ;

int i  = len-1 ;
if (str[len-1]=='\n')
{
    len-- ;
}

for ( i = len-1; i >=0; i--)
{
   printf("%c",str[i]) ;

}


} int main ()
{
    int i ;
    char str[10] ;
    printf("write a string") ;
    
    scanf("%s",str) ;

    inverser_chaine(str) ;  
    
}


