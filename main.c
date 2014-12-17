#include <stdio.h>
#include "ansiColors.h"

int main()
{
	printf("Welcome to the " ANSI_COLOR_RED "BLOODY DUNGEON" ANSI_COLOR_RESET "...\n");
	printf("by " ANSI_COLOR_BLUE "David Valachovic\n" ANSI_COLOR_RESET);
	
	printf("You awake lying on the ground. What do you want to do?\n\n-->");
	char inputStr[256];
	gets(inputStr);
	printf("You entered: %s\n", inputStr);

	return 0;
}
