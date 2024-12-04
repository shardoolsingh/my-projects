#include <stdio.h>
#include <stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	// variable to store a key
	int k;

	// check the number of arguments - for basic input validataion
	if(argc != 2)
	{
		printf("Correct usage: %s key\n", argv[0]);
		return 1;
	}
	else
	{
		k = atoi(argv[1]);	// char to int from arg[1]
	}

	// get a plaintext
	char plaintext[512];

	printf("Plaintext:  ");
	scanf("%[^\n]", plaintext);	// scans whole line until user hits enter, %s scans just a single string

	// if key is greater than 26; wraps up the key back to 0
	if(k >= 26)
	{
		k = k % 26;
	}

	// calculate the length of the plaintext and increment it into a ciphertext using key
	for(int i = 0; plaintext[i] != '\0';  i++)
	{
		// if small letter
		if(plaintext[i] >= 97 && plaintext[i] <= (97 + 26))
		{
			if(plaintext[i] + k >= 97 + 26)
			{
				int index = plaintext[i] + k - 26;
				plaintext[i] = index;
			}else
			{
				plaintext[i] = plaintext[i] + k;
			}

		}

		// if capital letter
		if(plaintext[i] >= 65 && plaintext[i] <= (65 + 26))
		{
			if(plaintext[i] + k >= 65 + 26)
			{
				int index = plaintext[i] + k - 26;
				plaintext[i] = index;
			}else
			{
				plaintext[i] = plaintext[i] + k;
			}
		}

		// if other letter
		plaintext[i] = plaintext[i];
	}

	// print the result and return 0
	printf("Ciphertext: %s\n", plaintext);	// output the ciphertext
	return 0;
}
