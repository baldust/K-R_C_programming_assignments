#include <stdio.h>

int main(){
  int i;
  
  for(i = 0; i < 100; i++){
    printf("%4d: %d\n", i, getchar() != EOF);
  }
}
