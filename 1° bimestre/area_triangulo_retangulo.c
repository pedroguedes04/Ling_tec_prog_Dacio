#include <stdio.h>
#include <stdlib.h>

// somador da área do triângulo retangulo

int main (int argc, char *argv[]) {
	int base, altura;
	float area;
	
	base= 10;
	altura= 20;
	area = (base*altura)/2;
	
	printf("A área do triangulo retangulo de base= %d e altura= %d resulta %f", base, altura, area);
	return 0;
}
