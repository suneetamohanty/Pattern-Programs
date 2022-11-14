#include<stdio.h>
/*Divyaranjan Sahoo
7.Pattern Printing*/
int main(){
  int i,j,k;
  for(i=5;i>=1;i--){
    for(j=5-i;j>=1;j--){
      printf("  ");}
    for (k=1;k<=i;k++){
      printf("%d ",k);}
    for (k=i-1;k>=1;k--){
      printf("%d ",k);}
  printf("\n");}
  return 0;}
