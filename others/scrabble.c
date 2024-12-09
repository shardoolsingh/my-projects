#include <stdio.h>

// a program to implement cs50 week2 problem set "scrabble"

// constat integer array to score points to be awarded
const int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// function prototype
int score(char *s);

// main function
int main(void)
{
	char str1[50];
	char str2[50];

	// Ask for 2  strings and store in str1 and str2
	printf("Player 1: ");
	scanf("%s", str1);

	printf("Player 2: ");
	scanf("%s", str2);

	// calculate scores of both player
	int score1 = score(str1);
	int score2 = score(str2);

	// declare the winner
	if(score1 > score2)
	{
		printf("Player 1 wins!\n");
	}
	else if(score2 > score1)
	{
		printf("Player 2 wins!\n");
	}
	else
	{
		printf("Tie!\n");
	}
}

// score function
int score(char *s)
{
	int score = 0;
	for(int i=0; s[i] != '\0'; i++)
	{
		int a[26];	// for capital alphabets
		int ac[26];	// for small alphabets
		for(int j = 0; j < 26; j++)
		{
			a[j] = 65 + j;
			ac[j] = 97 + j;
		}

		for(int j = 0; j < 26; j++)
		{
			if(s[i] == a[j])
			{
				int index = a[j] - 65;
				score = score + POINTS[index];
			}

			if(s[i] == ac[j])
			{
				int index = ac[j] - 97;
				score = score + POINTS[index];
			}
		}

	}
	return score;
}
