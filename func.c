#include<stdio.h>

int func();

int main(){

  int i = func();
  printf("Function return value: %d \n", i);
  
  return 0;
}

int func(){
  return 200;
}