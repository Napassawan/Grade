#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char n;
void grade(char);

int main()
{
	printf("Enter grade: ");
	scanf("%c", &n);
	grade(n);
}

void grade(char n)
{
	if (n == 'A' || n == 'a')
	{
		printf("The score is [80,100]");
	}
	else if (n == 'B' || n == 'b')
	{
		printf("The score is [70,80)");
	}
	else if (n == 'C' || n == 'c')
	{
		printf("The score is [60,70)");
	}
	else if (n == 'D' || n == 'd')
	{
		printf("The score is [50,60)");
	}
	else if (n == 'F' || n == 'f')
	{
		printf("The score is [0,50)");
	}
	else
	{
		printf("It isn't grade.");
	}
}