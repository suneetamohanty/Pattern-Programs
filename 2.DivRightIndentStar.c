#include<stdio.h>
/*Divyaranjan Sahoo
2.Pattern Printing*/
int main(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=5-i;j++){
      printf(" ");}
    for (j=1;j<=i;j++){
      printf("*");}
    printf("\n");}
  return 0;}
