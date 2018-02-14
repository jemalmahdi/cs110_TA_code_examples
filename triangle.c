#include <stdio.h>

// This is for the triangle of astericks

int main(){

  int size;
  printf("Enter the size of the triangle: ");
  scanf("%i",&size);

  for(int k = 1; k <= size; k++){
    for(int i = 0; i < k; i++){
      for(int j = 1; j < i + 2; j++){
        printf("* ");
      }
      printf("\n");
    }
    printf("\n");
  }


  return 0;
}
