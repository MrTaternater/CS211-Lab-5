// Includes header details in header file
#include "Lab5.h"

// Creates main function
int main(void)
{
	// Declare integers necessary for main
	int number;
	int colorCode;
	int monstCode;
	int monstStrength;
	int counter;
	
	// Declare two strings of 10 characters
	char monster[10];
	char color[10];

	// Declare two file pointers
	FILE* pInputFile = fopen("Lab5_DataFile.txt", "r");
	FILE* pOutputFile = fopen("Lab5_Output.txt", "w");
	
	// Print Star Divider
	PrintDividerStar(&counter, pOutputFile);

	// Print standard header to the screen
	PrintHeader(pOutputFile);

	// Print a bunch of symbols across the screen
	PrintDividerStar(&counter, pOutputFile);
	
	// Print table header to the screen
	PrintTableHeader(pOutputFile);
	
	// While loop to print each line of data
	while (fscanf(pInputFile, "%d", &number) == 1)
	{
		// Obtain numerical values of color, monster, and strength
		colorCode = GetColorCode(number);
		monstCode = GetMonsterCode(number);
		monstStrength = GetStrength(number);
		
		// Turn numerical values of color and monster into corresponding strings
		GetColor(colorCode, color);
		GetMonster(monstCode, monster);
		
		// Prints the values of monster, color, and 
		PrintLineOfData(pOutputFile, monster, color, monstStrength);
		
	}

	// Closes both the input and output files
	fclose(pInputFile);
	fclose(pOutputFile);

	// Return 0 to end main
	return 0;
}
