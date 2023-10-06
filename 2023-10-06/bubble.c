#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *_arr, int _len){
  for(int j = 0; j < _len - 1; j++){
    for(int i = 0; i < _len - 1; i++){
      int a = *(_arr + i); int b = *(_arr + i + 1);
      if(a > b){
        *(_arr + i) = b; *(_arr + i + 1) = a;
      }
    }
  }
}

int main(void){
  int len; int *arr = NULL; int choice = 0;
  printf("Podaj długość tablicy: "); scanf("%d", &len);

  arr = malloc(len * sizeof(int));
  for(int i = 0; i < len; i++) arr[i] = 0;

  while(choice != 1 && choice != 2){
    printf("Wpisać wartości ręcznie czy wygenerować losowo?\n");
    printf("Podaj 1 by wpisać, 2 by wylosować: "); scanf("%d", &choice);
    if(choice == 1){
      for(int i = 0; i < len; i++){
        printf("Podaj wartość arr[%d]: ", i); scanf("%d", arr + i);
      }
    }else if(choice == 2){
      srand(0); for(int i = 0; i < len; i++) arr[i] = rand() % 1000;
    }else{
      printf("Niepoprawny wybór.\n");
    }
  }

  printf("\nWartości tablicy (przed sortowaniem): \n");
  for(int i = 0; i < len; i++){
    printf("%d ", arr[i]);
  } printf("\n");

  bubblesort(arr, len);

  printf("\nWartości tablicy (po sortowaniu): \n");
  for(int i = 0; i < len; i++){
    printf("%d ", arr[i]);
  } printf("\n");
  
  return 0;
}