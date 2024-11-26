#include <stdio.h>

// Implement a linear search program

int main(void)
{
	int numbers[5] = {2, 17, 5, 9, 7};

	// Search the number
	int n;

	// Ask for a number to be found
	printf("Find: ");
	scanf("%d", &n);

	// Iterate over the array numbers[5]
	for(int i = 0; i < 5; i++)
	{
		if(numbers[i] == n)
		{
			printf("Found %d.\n", n);
			return 0;
		}
	}

	printf("Not Found.\n");
	return 1;	// exit status 1 for not found
}
