#include <stdio.h>

unsigned int factorial(unsigned int N){
	int fact = 1;
	
	for(int i = 1; i<= N; i++){
		fact = fact * i;
	}
	
	return fact;
}

int main(){
	printf("Zadaj cislo, z ktoreho chces vypocitat faktorial: ");
	int N = 0;
	scanf("%d", &N);
	int fact = factorial(N);
	printf("Faktorial cisla %d je: %d \n", N, fact); 
	
	return 0;
}
