#include<stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(){
  int area;
  const int AGE = 20;
  area = LENGTH * WIDTH;
  printf("Area: %d", area);
  printf("%c", NEWLINE);
  printf("Age: %d", AGE);
  printf("%c", NEWLINE);
  return 0;
}