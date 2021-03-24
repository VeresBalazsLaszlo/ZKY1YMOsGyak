#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char command[50];
	char ch;
	while((ch = getchar()) != "/*CTRL+/ jel kódja ide*/")
	{
	scanf("%s",&command);
	system(command);
	}
}