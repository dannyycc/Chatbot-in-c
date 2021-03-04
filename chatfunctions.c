#include <stdio.h>
#include <string.h>
#include "chatfunctions.h"

void greeting()
{
	printf("Hello, welcome to this amazing chat bot, written in C!\n");
	printf("Type help to show the available commands\n");
}

void take_input(char * input)
{	
	printf("chatbot ~ >> ");
	strcpy(input, fgets(input,200,stdin)); //copy input from stdin to input pointer
}

void respond_to(char * input, char * response)
{	
	puts(input); // just prints out what was inputted!
}

void goodbye()
{	
	//TODO: Use goodbye.c
	printf("Thanks for using this amazing chatbot :)");
	printf("Au revoir!\n");
}
