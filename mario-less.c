#include <stdio.h>
#include <stdlib.h>

// Program: Mario-less for cs50x 2024

int main(int argc, char *argv[]){
	// height of the pyramid - ex. H: 3
	int n = atoi(argv[1]);

	// Input sanitisation: works for only positive heights
	if(n<1){
		return 1;
	}

	for(int i=0; i<n; i++){
		// print new empty line
		printf("\n");

		// print (height - 1) spaces
		for(int j=i+1; j<n; j++){
			printf(" ");
		}

		// print #, no. of # == line number
		for(int k=n-(i+1); k<n; k++){
			printf("#");
		}
	}

	// new line for indentation
	printf("\n");

	return 0;
}
