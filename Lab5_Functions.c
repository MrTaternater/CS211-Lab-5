// Includes header details in header file
#include "Lab5.h"

//-----------------------------------------------------------------------------
// Function Name: PrintDividerStar
// Description: Prints a line of 110 stars as a divider to the screen.
//
//
//-----------------------------------------------------------------------------
void PrintDividerStar(int *counter, FILE *pOutputFile)
{
	// Initialize LCV (Loop Control Variable) to 0
	*counter = 0;
	
	// Print a bunch of symbols across the screen
	while (*counter < DIVIDER_LENGTH)
	{
		// Print one character to the screen
		fprintf(pOutputFile, "%c", STAR);

		// Increment counter
		(*counter)++;
	}
	// Move the cursor down to the next line
	fprintf(pOutputFile, "\n");
}

//-----------------------------------------------------------------------------
// Function Name: PrintDividerDash
// Description: Prints a line of 110 dashes as a divider to the screen.
//
//
//-----------------------------------------------------------------------------
void PrintDividerDash(int *counter, FILE *pOutputFile)
{
	// Initialize LCV (Loop Control Variable) to 0
	*counter = 0;
	
	// Print a bunch of symbols across the screen
	while (*counter < DIVIDER_LENGTH)
	{
		// Print one character to the screen
		fprintf(pOutputFile, "%c", DASH);

		// Increment counter
		(*counter)++;
	}
	
	// Move the cursor down to the next line
	fprintf(pOutputFile, "\n");
}

//-----------------------------------------------------------------------------
// Function Name: PrintHeader
// Description: Prints the standard header, including the school name, lab name 
// and programmer name to the screen.
//
//-----------------------------------------------------------------------------
void PrintHeader(FILE *pOutputFile)
{
	// Print header to the screen
    fprintf(pOutputFile, SCHOOL);
    fprintf(pOutputFile, LAB);
    fprintf(pOutputFile, PROGRAMMER);
}

//-----------------------------------------------------------------------------
// Function Name: PrintTableHeader
// Description: Prints the table header, including the current number, number 
// counters and accumulator numbers to the screen.
//
//-----------------------------------------------------------------------------
void PrintTableHeader(FILE *pOutputFile)
{
	// Print Header to the screen
	fprintf(pOutputFile, "%18s%22s%22s\n", MONSTER, COLOR, STRENGTH);
}

//-----------------------------------------------------------------------------
// Function Name: GetColorCode
// Description: Returns the values of bits one and two of a given number as a
// code for the color.
//
//-----------------------------------------------------------------------------
int GetColorCode(int fileNumber)
{
	// Shifts the 1st and 2nd bits to the 0th and 1st slots and returns their value between 0 and 3
	return ((fileNumber >> 1) & 0x3);
}
//-----------------------------------------------------------------------------
// Function Name: GetMonsterCode
// Description: Returns the values of bits four and five of a given number as a
// code for the monster.
//
//-----------------------------------------------------------------------------
int GetMonsterCode(int fileNumber)
{
	// Shifts the 4th and 5th bits to the 0th and 1st slots and returns their value between 0 and 3
	return ((fileNumber >> 4) & 0x3);
}

//-----------------------------------------------------------------------------
// Function Name: GetStrength
// Description: Returns the values of bits six through 13 of a given number as the value for a
// the value for a monster's strength.
//
//-----------------------------------------------------------------------------
int GetStrength(int fileNumber)
{
	// Declares return variable
	int monsterStrength;
	
	// Shifts the fileNumber right 6 slots and sets variable to first eight bits
	monsterStrength = (fileNumber >> 6) & 0xFF;
	
	// Returns new monster strength
	return monsterStrength;
}

//-----------------------------------------------------------------------------
// Function Name: GetColor
// Description: Reads the value of the color code and copies the proper string
// to char color[].
//
//-----------------------------------------------------------------------------
void GetColor(int colorCode, char color[])
{
	// Switch statement to determine correct color
	switch (colorCode)
	{
		// Brown for code 0
		case 0:
			strcpy(color, "Brown");
			break;
		// Red for code 1
		case 1:
			strcpy(color, "Red");
			break;
		// Green for code 2
		case 2:
			strcpy(color, "Green");
			break;
		// White for code 3
		case 3:
			strcpy(color, "White");
			break;
	}
}

//-----------------------------------------------------------------------------
// Function Name: GetMonster
// Description: Reads the value of the monster code and copies the proper
// string to char monster[].
//
//-----------------------------------------------------------------------------
void GetMonster(int monsterCode, char monster[])
{
	// Switch statement to determine correct monster
	switch (monsterCode)
	{
		// Dragon for code 0
		case 0:
			strcpy(monster, "Dragon");
			break;
		// Goblin for code 1
		case 1:
			strcpy(monster, "Goblin");
			break;
		// Troll for code 2
		case 2:
			strcpy(monster, "Troll");
			break;
		// Ghost for code 3
		case 3:
			strcpy(monster, "Ghost");
			break;
	}
}

//-----------------------------------------------------------------------------
// Function Name: PrintLineOfData
// Description: Takes the values of monster[], color[], and strength, and
// prints them to the screen.
//
//-----------------------------------------------------------------------------
void PrintLineOfData(FILE *pOutputFile, char monster[], char color[], int strength)
{
	//Prints a single line of data to the screen
	fprintf(pOutputFile, "%18s%22s%22d\n", monster, color, strength);
}
