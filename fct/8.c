#include <stdio.h>
 int est_pair(int nombre){
 if (nombre%2==0)
 {
    printf("pair") ;
 }
 else if (nombre%2==1)
 {
    printf("impaire") ;
 }
 
 }
 int main ()
 {
    int n ;
    printf("write a number") ;
    scanf("%d",&n) ;
    est_pair(n) ;
 }