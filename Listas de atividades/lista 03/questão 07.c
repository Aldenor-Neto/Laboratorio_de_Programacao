#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main () {

int num[3];
float ma, mg ;
int x=0, y=1, i ;

srand(time(NULL));
printf("os numeros gerados do vetor sao : ");

for (i=0 ; i<3 ; i++ ){
num[i] = rand()%20;
printf("%d, ", num[i] );

x += num[i] ;
y *=num[i] ;
}
ma = (float)x/3 ;
mg = pow(y, 0.33) ;;

printf("\n a media aritimetica e %.2f \n", (float)ma );
printf("a media geometrica e %.2f \n", mg );
    return 0;
}