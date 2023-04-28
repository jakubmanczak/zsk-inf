#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct ulamek{
	int licz;
	int mian;
} ulamek;

int nwd(int a, int b){
	int nwd;
	for(int i = 1; i < (a > b ? a : b); i++){
		if(a % i == 0 && b % i == 0){
			nwd = i;
		}
	}
	return nwd;
}

ulamek uprosc(ulamek a){
	int dzielnik = nwd(a.licz, a.mian);
	a.licz = a.licz / dzielnik;
	a.mian = a.mian / dzielnik;
	return a;
}

void wypisz(ulamek a){
	printf("%d/%d\n", a.licz, a.mian);
}

int main(void){
	ulamek a = (ulamek){75, 125};
	wypisz(a);
	printf("nwd: %d\n", nwd(a.licz, a.mian));
	a = uprosc(a);
	wypisz(a);
	return 0;
}