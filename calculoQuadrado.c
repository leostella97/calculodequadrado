#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float numL, raiz;
	printf("CALCULO DE QUADRADO\n");
	printf("Digite o l: ");
	scanf("%f", &numL);
	raiz = pow (numL, 2);
	printf("A area do quadrado e %f", raiz);
	getch();
}

