#include <stdio.h>

// function prototypes
int isPresent(int n, int numbers[]);

int main(void)
{
	int numbers[100];
	// Fill the array with some numbers
	for(int i = 0; i<100; i++)
	{
		numbers[i] = (i+1) * 7 * 3;
	}

	int n;
	// Ask a number to search for & store it in n
	printf("Find: ");
	scanf("%d", &n);

	isPresent(n, numbers);
}

int isPresent(int n, int numbers[])
{
	for(int i = 0; numbers[i] != '\0'; i++)
	{
		if(numbers[i] == n)
		{
			printf("Found.\n");
			return 0;
		}
	}

	printf("Not Found.\n");
	return 1;	// exit status 1 for not found
}
