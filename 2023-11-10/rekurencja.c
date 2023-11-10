#include <stdio.h>

void odliczanie(int n){
  if(n == -1) printf("Start!\n");
  else{
    printf("%d ", n);
    odliczanie(n-1);
  }
}

void doliczanie(int n, int max){
  printf("%d ", n);
  if(n == max) printf("\n");
  else doliczanie(n+1, max);
}

int main(void){
  int n;
  printf("Podaj liczbę n: ");
  scanf("%d", &n);
  odliczanie(n);
  doliczanie(1, n);
  return 0;
}