#include<stdio.h>

int a = 20;

int sum(int a, int b);

int main(){

  int a = 10;
  int b = 20;
  int c = 0;

  printf("Value of a in main(): %d \n", a);
  c = sum(a, b);
  printf("Value of c in main(): %d \n", c);

}

int sum(int a, int b){
  printf("Value of a in sum(): %d \n", a);
  printf("Value of b in sum(): %d \n", b);

  return a + b;
}