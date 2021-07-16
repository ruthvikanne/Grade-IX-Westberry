#include <stdio.h>
#include <conio.h>


int main()
{
	int age;
	printf_s("Enter Your Age");
	scanf_s("%d", &age);
	if (age >= 18)
	{
		printf_s("You Are Eligible For Voting");
	}
	else
	{
		printf_s("You Are Not Eligible For Voting");
	}
}
