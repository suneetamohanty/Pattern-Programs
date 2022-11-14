#include<stdio.h>
/*Divyaranjan Sahoo
Printing 1 and 0 pattern*/
int main(){
  int i,j;
  for(i=1;i<=6;i++){
    for(j=0;j<i;j++){
    printf("%d ",(j+i)%2);}
  printf("\n");}
  return 0;}
