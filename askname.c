/* askname.c */

#include <stdio.h>
#include <string.h>

void askname(char *first, char *last)
{
	printf("Enter your first name: ");
	fgets(name, 255, stdin);
	first[strlen(first)-1] = '\0'; /*Remove the newline at the end*/

	printf("Now enter your last name: ");
	gets(last); /*Buffer overflow? What's that?*/	
}