#include <stdio.h>
#include <math.h>

#define MAX 500

int calculaMdc(int x, int y){
  int resto;

  do{
    resto = x % y;
    x = y;
    y = resto;
  }while(resto != 0);
  
  return x;
}

int main(void){
  int c1, c2, aux, mdc1, mdc2;
  float h;

  for(c1 = 1; c1 <= MAX; c1++){
    for(c2 = c1; c2 <= MAX; c2++){
      h = sqrt(pow(c1, 2) + pow(c2, 2));
      aux = h;
      if(aux == h && aux <= MAX){
        mdc1 = calculaMdc(c1, c2);
        mdc2 = calculaMdc(h, mdc1);
        if(mdc1 == 1 && mdc2 == 1){
          printf("(%d, %d, %d)\n", c1, c2, aux);
        }
      }
    }
  }
  
  return 0;
}