#include <stdio.h>
#include <string.h>
#include "chatfunctions.h"
#include <string.h>

void greeting()
{
	printf("Hello, welcome to this amazing chat bot, written in C!\n");
	printf("Type help to show the available commands\n");
	
	// TODO: Fix the following code
	
	//greets user
	//time
	//Adam Rosenfield, 20/10/2020,
//	time_t t = time(NULL);
//	struct tm tm = *localtime(&t);
	//source code, https://stackoverflow.com/questions/1442116/how-to-get-the-date-and-time-values-in-a-c-program

	//conditions of time and greeting
//	if (tm.tm_hour >= 0 && tm.tm_hour < 12)
//	{
//			printf("  ________                  .___                             .__                ");
//			printf(" /  _____/  ____   ____   __| _/   _____   ___________  ____ |__| ____    ____  ");
//			printf("/   \  ___ /  _ \ /  _ \ / __ |   /     \ /  _ \_  __ \/    \|  |/    \  / ___\ ");
//			printf("\    \_\  (  <_> |  <_> ) /_/ |  |  Y Y  (  <_> )  | \/   |  \  |   |  \/ /_/  >");
//			printf(" \______  /\____/ \____/\____ |  |__|_|  /\____/|__|  |___|  /__|___|  /\___  / ");
//			printf("        \/                   \/        \/                  \/        \//_____/  ");
//	}
//	else if (tm.tm_hour >= 12 && tm.tm_hour < 17)
//	{
//			printf("  ________                  .___    _____   _____  __                                            
//			printf(" /  _____/  ____   ____   __| _/   /  _  \_/ ____\/  |_  ___________  ____   ____   ____   ____  ");
//			printf("/   \  ___ /  _ \ /  _ \ / __ |   /  /_\  \   __   __\/ __ \_  __ \/    \ /  _ \ /  _ \ /    \ ");
//			printf("\    \_\  (  <_> |  <_> ) /_/ |  /    |    \  |   |  | \  ___/|  | \/   |  (  <_> |  <_> )   |  \ ");
//			printf(" \______  /\____/ \____/\____ |  \____|__  /__|   |__|  \___  >__|  |___|  /\____/ \____/|___|  /");
//			printf(" \/                   \/          \/                 \/           \/                   \/ ");
//	}
//	else if (tm.tm_hour >= 17 && tm.tm_hour < 20)
//	{
//			printf("  ________                  .___ ___________                   .__                ");
//			printf(" /  _____/  ____   ____   __| _/ \_   _____/__  __ ____   ____ |__| ____    ____  ");
//			printf("/   \  ___ /  _ \ /  _ \ / __ |   |    __)_\  \/ // __ \ /    \|  |/    \  / ___\ ");
//			printf("\    \_\  (  <_> |  <_> ) /_/ |   |          /\  ___/|   |  \  |   |  \/ /_/  >");
//			printf(" \______  /\____/ \____/\____ |  /_______  / \_/  \___  >___|  /__|___|  /\___  / ");
//			printf("        \/                   \/          \/           \/     \/        \//_____/  ");
//	}
}

void take_input(char * input)
{	
	printf("chatbot ~ >> ");
	strcpy(input, fgets(input,200,stdin)); //copy input from stdin to input pointer
}

void respond_to(char * input, char * response)
{	
	puts(input); // just prints out what was inputted!
	strcpy(response,input);
}

void goodbye()
{	
	//TODO: Use goodbye.c
	printf("Thanks for using this amazing chatbot :)");
	printf("Au revoir!\n");
}
