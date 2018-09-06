#include <stdio.h>

int main(){
  float fahr, celsius;
  float lower, upper, step;

  lower = 300;
  upper = 0;
  step = -20;

  printf("%.24s\n","_______________________________");
  printf("|%10.10s |%10.10s|\n", "Fahrenheit", "Celsius");
  printf("%.24s\n","_______________________________");
  for (fahr = lower; fahr >= upper; fahr += step) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("|%10.0f |%10.1f|\n", fahr, celsius);
    fahr = fahr + step;
  }
  printf("%.24s\n","_______________________________");
}
