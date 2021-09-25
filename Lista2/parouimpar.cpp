#include <stdio.h>

int main() {
	int n;
	scanf("%i", &n);
	//Loop dependendo do valor de n ser positivo ou negativo para analise posteriormente.
	if (n > 0){
		while(n > 0){
			n -= 2;
		}
	}
	else if (n < 0){
		while(n < 0){
			n += 2;
		}
	}
	//Condicoes que farao a analise de acordo com o loop anterior, se n e par ou impar.
	if (n == 0)
		printf("Par\n");
	else
		printf("Impar\n");

    return 0;

}

