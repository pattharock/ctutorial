#include<stdio.h>

int main(){

  int var = 20;
  int *ip;

  ip = &var;

  printf("Address of var is: %x\n", &var);
  printf("Value of var is: %d\n", var);

  printf("Address of var is: %x\n", ip);
  printf("Value of var is: %d\n", *ip);
  return 0;
}