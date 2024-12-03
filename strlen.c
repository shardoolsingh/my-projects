#include <stdio.h>

// a simple program to calculate string length
int main(void)
{
	// Ask for a string, max size 50 characters
	char str[50];
	printf("Enter a string: ");
	scanf("%s", str);

	int len;	// length counter
	for(int i=0; str[i] != '\0'; i++)
	{
		len = i + 1;
	}
	printf("Length: %d.\n", len);

	return 0;
}
