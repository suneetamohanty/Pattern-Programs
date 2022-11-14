#include<stdio.h>
/*Divyaranjan Sahoo
5.Pattern Printing*/
int main(){
  int i,j;
  for(i=5;i>=1;i--){
    for(j=5-i;j>=1;j--){
      printf(" ");}
    for (j=i;j>=1;j--){
      printf("%d",j);}
    printf("\n");}
  return 0;}
