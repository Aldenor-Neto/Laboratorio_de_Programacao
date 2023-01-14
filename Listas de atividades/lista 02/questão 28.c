#include <stdio.h>
#include <math.h>

int main(){
  unsigned char x, y;
  int posicao, termo, uniao, bitx;
  
  posicao = -4;
  
  printf("Valor de X: ");
  scanf("%hhu", &x);
  printf("Valor de Y: ");
  scanf("%hhu", &y);

  for(int i = 0; i < 8; i++){
    termo = y + posicao;

    if(termo == y){
      posicao++;
      i--;
      continue;
    }
    
    if((x & (int)pow(2, i)) > 0)
      bitx = 1;
    else
      bitx = 0;
    
    if((termo % 2) < bitx)
      uniao = termo + 1;
    else if((termo % 2) > bitx)
      uniao = termo - 1;
    else
      uniao = termo;
    
    printf("num = %d -> num com bit de x = %d\n", termo, uniao);
    posicao++;
  }
  
  return 0;
}