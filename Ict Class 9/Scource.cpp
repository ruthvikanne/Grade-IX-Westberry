// A Program To Find Out wheather a Number is Even or Odd
#include <stdio.h>
#include <conio.h>

int main()
{
	int rem, num;
	printf_s("Enter Any Number");
	scanf_s("%d", &num);
	rem = num % 2;
	if (rem == 0)
	{
		printf_s("It is a Even Number");
	}
	else
	{
		printf_s("It is an Odd Number");
	}
}

