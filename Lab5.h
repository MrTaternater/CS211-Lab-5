#ifndef LAB5_H
#define LAB5_H

// Include for proper Visual Studio function
#define _CRT_SECURE_NO_WARNINGS

// Include for printing to the screen
#include <stdio.h>

// Include to use various string functions
#include <string.h>

// Macro for divider length
#define DIVIDER_LENGTH 110

// Macros for divider types
#define STAR '*'
#define DASH '-'

// Macros for standard header details
#define SCHOOL "[COLLEGE]\n"
#define LAB "Lab 5 - Solution File\n"
#define PROGRAMMER "Program Written by: [NAME]\n"

// Macros for table header details
#define MONSTER "Monster"
#define COLOR "Color"
#define STRENGTH "Strength"

// Prototypes for functions listed below
void PrintDividerStar(int *counter, FILE *pOutputFile);

void PrintDividerDash(int *counter, FILE *pOutputFile);

void PrintHeader(FILE *pOutputFile);

void PrintTableHeader(FILE *pOutputFile);

int GetColorCode(int fileNumber);

int GetMonsterCode(int fileNumber);

int GetStrength(int fileNumber);

void GetColor(int colorCode, char color[]);

void GetMonster(int monsterCode, char monster[]);

void PrintLineOfData(FILE *pOutputFile, char monster[], char color[], int strength);

#endif
