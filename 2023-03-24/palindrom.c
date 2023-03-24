#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* word){
	int i = 0; int len = strlen(word) - 1;
	while(i < len){
		if(word[i] != word[len]) return false;
		i++; len--;
	}
	return true;
}

int main(void){
	char* slowo;
	printf("Podaj wyraz: ");
	scanf("%s", slowo);
	printf(isPalindrome(slowo) ? "To palindrom!\n" : "To nie palindrom!\n");
	return 0;
}