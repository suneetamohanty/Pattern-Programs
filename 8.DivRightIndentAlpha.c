#include<stdio.h>
/*Divyaranjan Sahoo
8.Pattern Printing*/
int main(){
  char i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=5-i;j++){
      printf(" ");}
    for (j=1;j<=i;j++){
      printf("%c",j+64);}
    printf("\n");}
  return 0;}
