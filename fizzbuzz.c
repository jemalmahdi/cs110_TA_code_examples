#include <stdio.h>

int main() {

  int input;

  printf("Enter a number: ");
  scanf("%i",&input);

  for(int i = 1; i <= input; i++) {
    if(i % 3 == 0 && i % 5 == 0){
      printf("fizz buzz \n");
    }
    else if(i % 3 == 0) {
      printf("fizz\n");
    }
    else if(i % 5 == 0){
      printf("buzz\n");
    }
    else{
      printf("%i\n", i);
    }
  }

  return 0;
}
