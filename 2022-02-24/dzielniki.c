#include <stdio.h>

int main(void){
	printf("Podaj liczbę do sprawdzenia dzielników: ");
	int liczba;
	scanf("%d", &liczba);
	printf("Dzielniki liczby %d:\n", liczba);
	for(int i = 1; i <= liczba/2; i++){
		if(liczba % i == 0) printf("%d\n", i);
	}
	return 0;
}