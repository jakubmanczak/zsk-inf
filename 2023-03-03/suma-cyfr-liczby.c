#include <stdio.h>
#include <stdbool.h>

int calculateSumaCyfr(int a){
	int suma = 0;
	while(a){
		suma += a % 10;
		a = a / 10;
	}
	return suma;
}

int main(void){
	int a;
	printf("Podaj liczbę do zsumowania jej cyfr: ");
	scanf("%d", &a);
	printf("%d\n", calculateSumaCyfr(a));
	return 0;
}