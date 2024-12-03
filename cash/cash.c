#include <stdio.h>

// Program cs50x 2024, week 1: cash to count least number of change required

int main(void)
{
	// Integer to store no. of chains owed
	int n;

	// Ask for an input & store it in the address of n; with basic input sanitisation
	do
	{
		printf("Change Owed: ");
		scanf("%d", &n);
	}
	while(n < 0);

	// Store total number of change required
	int store;

	// If change required is greater than 25
	if(n >= 25)
	{
		int tmp1 = n % 25;
		int tmp2 = n / 25;

		n = tmp1;	// change left
		store = tmp2;	// no. of coins required
	}

	//If change left is greater than or equal to 10
	if(n >= 10)
	{
		int tmp1 = n % 10;
		int tmp2 = n / 10;

		n = tmp1;	// change left
		store = store + tmp2;	// no. of coins required incremented
	}

	// If change left is greater than or equal to 5
	if(n >= 5)
	{
		int tmp1 = n % 5;
		int tmp2 = n / 5;

		n = tmp1;	// change left
		store = store + tmp2;	// no. of coins required incremented
	}

	// If change left is greater than or equal to 1
	if(n >= 1)
	{
		int tmp1 = n % 1;
		int tmp2 = n / 1;

		n = tmp1;	// change left
		store = store + tmp2;	// no. of coins required incremented
	}

	// Print out least no. of coins required to pay the change owed
	printf("Minimum Coins Required: %d.\n", store);

	return 0;
}
