#include <stdio.h>
#include <stdbool.h>

void printRozlozone(int a){
	while(a){
		printf("%d\n", a % 10);
		a = a / 10;
	}
}

int main(void){
	int a;
	printf("Podaj liczbę do rozłożenia: ");
	scanf("%d", &a);
	printRozlozone(a);
	return 0;
}