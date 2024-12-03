#include <stdio.h>


// A program to implement linear search with time comlexity of O(n).

int main(void)
{
	// Fill array with the numbers
	int numbers[100];
	for(int i=0; i<100; i++)
	{
		numbers[i] = (i + 1) * 3 * 7;
	}

	// Ask for an integer
	printf("Enter the number: ");
	int n;

	scanf("%d", &n);

	// Search for n by iterating over the entire array one by one
	for(int i=0; i<100; i++)
	{
		if(numbers[i] == n)
		{
			printf("Found %d, indexed at %d in the array.\n", n, i);
			return 0;
		}
	}
	printf("Number %d not found in the list.\n", n);

	return 1;	// exit status for not found
}

