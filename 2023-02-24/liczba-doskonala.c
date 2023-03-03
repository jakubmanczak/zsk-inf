#include <stdio.h>
#define bool char
#define true 1
#define false 0

bool isDoskonala(int liczba){
	int suma = 0;
	for(int i = 1; i <= liczba/2; i++){
		if(liczba % i == 0) suma += i;
	}
	return suma == liczba;
}

int main(void){
	printf("Podaj liczbę do sprawdzenia: ");
	int a;
	scanf("%d", &a);
	if(isDoskonala(a)) printf("%d jest liczbą doskonałą!\n");
	if(!isDoskonala(a)) printf("%d nie jest liczbą doskonałą!\n");
}