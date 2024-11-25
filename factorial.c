#include <stdio.h>

int main(void){
	int n = 4;	// find the factorial of n

	for(int i = n-1; i>1; i--){
		n = n*i;
	}

	printf("Factorial: %d.\n", n);
	return 0;
}
