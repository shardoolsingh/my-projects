#include <stdio.h>
#include <stdlib.h>

// function prototypes
int whichGrade(char *word);

int main(void)
{
	char word[1000];
	// scan a sentence
	printf("Text: ");
	scanf("%[^\n]", word);

	int index = whichGrade(word);
	printf("Index: %d\n", index);
	return 0;
}

int whichGrade(char *word)
{
	int letters, spaces, sentences;
	spaces = 0;
	sentences = 0;
	for(int i=0; word[i] != '\0'; i++)
	{
		letters = i+1;
		if(word[i] == 32)	// if character is <space>
		{
			spaces++;
		}
		if(word[i] == 46 || word[i] == 33 || word[i] == 63)	//if character is ./!/?
		{
			sentences++;
		}
	}
	int words = spaces + 1;

	// l, average no. of tetters per 100 words
	float l = (float)letters/words*100.0;

	// s, average no. of sentences per 100 words
	float s = (float)sentences/words*100.0;

	// final readabilty index - using Coleman-Liau Index
	float index = 0.0588*l - 0.296*s - 15.8;

	return (int)index;
}
