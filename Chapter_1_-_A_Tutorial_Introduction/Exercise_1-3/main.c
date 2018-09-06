#include <stdio.h>

int main(){
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%.24s\n","_______________________________");
  printf("|%10.10s |%10.10s|\n", "Fahrenheit", "Celsius");
  printf("%.24s\n","_______________________________");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("|%10.0f |%10.1f|\n", fahr, celsius);
    fahr = fahr + step;
  }
  printf("%.24s\n","_______________________________");
}
