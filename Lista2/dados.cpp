#include <stdio.h>

int main() {
	int X, Y, Z, W, somaA, somaB, somaC;
	scanf("%i %i %i %i", &X, &Y, &Z, &W);
	if (X,Y,Z,W > 0 && (X,Y,Z,W <= 6)){
		if (X != Y && X != Z && X != W && Y != Z && Y != W && Z != W){
			somaA = X+Y;
			somaB = Z+W;
			somaC = 21 - somaA - somaB;
			if (somaC >= somaA){
				if (somaC > somaB)
					printf("C");
				else if (somaC == somaA)
					printf("AC");
				else if (somaC == somaB)
					printf("BC");
				else if (somaC < somaB)
					printf("B");
			}
			else if (somaA > somaC){
				if (somaA > somaB)
					printf("A");
				else if (somaA == somaB)
					printf("AB");
			}
			else if (somaA == somaB == somaC)
				printf("ABC");
		}
		else
			printf("Valores invalidos");
	}
	else
		printf("Valores invalidos");

    return 0;

}

