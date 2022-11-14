#include<stdio.h>
/*Divyaranjan Sahoo
10.Pattern Printing*/
int main(){
    int  i, j, a = 1;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++){
          printf( "%i ",j);}
          printf("\n");}
    for (i = 4; i >= 1; i--){
        for (j = 1; j <= i; j++){
            printf ("%i ",j);}
        printf("\n");}
    return 0;}
