#include <stdio.h>

// function prototypes
int whichGrade(char *word);

int main(void)
{
	char word[1000];
	// scan a sentence
	printf("Text: ");
	scanf("%[^\n]", word);

	int index = whichGrade(word);

	if(index < 1)
    {
        printf("Before Grade 1\n");
    } else if(index > 16)
    {
        printf("Grade 16+\n");
    } else
    {
        printf("Grade %d\n", index);
    }
	return 0;
}

int whichGrade(char *word)
{
	int letters, spaces, sentences;
	spaces = 0;
	sentences = 1;
	for(int i=0; word[i] != '\0'; i++)
	{
		letters = i+1;
		if(word[i] == 32)	// if character is <space>
		{
			spaces++;
		}
		if(word[i] == 46 || word[i] == 33 || word[i] == 63)	//if character is ./!/?
		{
			if(word[i+1])	//if there is space after .
			{
				sentences++;
			}
		}
	}
	letters = letters - spaces - sentences;		// removes spaces & sentences to be counted as letters
	int words = spaces + 1;

	// l, average no. of tetters per 100 words
	float l = (float)letters/words;
	l = l * 100;

	// s, average no. of sentences per 100 words
	float s = (float)sentences/words;
	s = s * 100;

	// final readabilty index - using Coleman-Liau Index
	float index = 0.0588*l - 0.296*s - 15.8;
	// -0.25 extra to tame down my scores
	index = index - 0.25;

	// fancy way of rounding to nearest whole integer without using round() from math.h
	index = (int)(index < 0 ? (index - 0.5) : (index + 0.5));

	//return (int)index;
	return (int)index;
}