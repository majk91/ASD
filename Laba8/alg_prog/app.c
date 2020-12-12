#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20


void print(char[N]);
void findABC(char[N]);


int main() {

  char symbols[N] = { 'a', 'x', 'c', 'a', 'b', 'c', 'a', 'x', 'c', 'f', 'f', 'a', 'x', 'a', 'a', 'b', 'c', 'a', 'x', 'c' };

  print(symbols);

  printf("\n");
  printf("\n");

  //findABC(symbols);

  return 0;
}



void print(char arr[N]) {
  for(int i = 0; i < N; i++) {
    printf("%c\n", arr[i]);
  }
}


void findSame(char arr[N]) {
  int counter = 0;
  for(int i = 0; i < N - 3; i++) {
    if (arr[i] == 'a' && arr[i+1] == 'b' && arr[i+2] == 'c' ) {
      counter++;
    }
  }
  printf ("Found amount of abc groups in array: %4d\n", counter); 
}