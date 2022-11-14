#include <stdio.h>
/*Divyaranjan Sahoo
11.Printing Pattern*/
int main(){
    int i, j;
    for ( i = 7; i >= 1; i--){
      for (j=1; j<=7; j++){
        if(j <= i)
        printf ("%c", j+64);
        else
        printf(" ");}
      for ( j=6; j>=1; j--){
        if( j<=i)
        printf ("%c", j+64);
        else
          printf(" ");}
        printf ("\n");}
    return 0;}
