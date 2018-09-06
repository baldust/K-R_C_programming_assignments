#include <stdio.h>

int main(){
  float fahr, celsius;
  float lower, upper, step;

  lower = -10;
  upper = 100;
  step = 5;

  celsius = lower;
  printf("%.24s\n","_______________________________");
  printf("|%10.10s |%10.10s|\n", "Celsius", "Fahrenheit");
  printf("%.24s\n","_______________________________");
  while (celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32;
    printf("|%10.0f |%10.1f|\n", celsius, fahr);
    celsius += step;
  }
  printf("%.24s\n","_______________________________");
}
