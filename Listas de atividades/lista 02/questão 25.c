#include <stdio.h>

int main(){
  float pi = 0;
  int d = 1;

  for(int n = 1; n <= 5; n++){
    if(n % 2 == 0)
      pi -= 4 / (float)d;
    else
      pi += 4 / (float)d;
    printf("Termos = %d | Pi = %.2f\n", n, pi);
    d += 2;
  }
  
  return 0;
}