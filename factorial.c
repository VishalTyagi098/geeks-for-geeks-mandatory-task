#include <stdio.h>

int factorial(int n);

int main(){
  int n;
  scanf("%d",&n);
  int result=factorial(n);
  printf("%d",result);
  return 0;
}

int factorial(int n){
  if(n==1){
    return 1;
  }
  int fact=factorial(n-1)*n;
  return fact;
}