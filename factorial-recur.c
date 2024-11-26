#include <stdio.h>

// Functions Prototypes
int fact(int n);

int main(void)
{
	// Find the factorial of number
	int number;

	// Ask for a positive integer
	do
	{
		printf("Number: ");
		scanf("%d", &number);
	}
	while(number < 1);

	int result = fact(number);

	printf("Factorial: %d.\n", result);
	return 0;
}

int fact(int n)
{
	if(n == 1)
	{
		return n;
	}

	n = n * fact(n - 1);

	return n;
}
