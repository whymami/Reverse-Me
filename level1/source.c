#include "stdio.h"
#include "string.h"

int main(void)
{
	char userinput[1000];

	printf("Please enter key: ");
	scanf(userinput, "%s");

	if (strcmp(userinput, "__stack_check") == 0)
		printf("Good job.\n");
	else
		printf("Nope.\n");
}
