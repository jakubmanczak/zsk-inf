#include <stdio.h>
#include <math.h>

int potega(int x, int n){
	int temp = 1;
	while(n > 0){
		temp = temp * x;
		n = n - 1;
	}
	return temp;
}

int szybka_potega(int x, int n){
	int y = 1; int temp = x;
	while(n > 0){
		if(n % 2) y *= temp;
		n /= 2;
		if (n > 0) temp *= temp;
	}
	return y;
}

int main(void){
	printf("%d\n", potega(2, 16));
	printf("%d\n", szybka_potega(2, 16));
	return 0;
}