// This Program Gives Big In 3

#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, c;
	printf("Enter Number 1");
	scanf_s("%d", &a);
	printf("Enter Number 2");
	scanf_s("%d", &b);
	printf("Enter Number 3");
	scanf_s("%d", &c);

	if (a > b && a > c)
	{
		printf_s("Number 1 %d is The Big Number", a);
	}
	else if (b > a && b > c)
	{
		printf_s("Number 2 %d is The Big Number", b);
	}
	else if (c > a && c > b)
	{
		printf_s("Number 3 %d is The Big Number", c);
	}
	else if (a == c && c == b)
	{
		printf("All The Numbers Are Equal");
	}
	else if (a == c)
	{
		printf_s("Number 1 and Number 3 are Equal");
	}
	else if (a == b)
	{
		printf_s("Number 1 and Number 2 are Equal");
	}
	else if (b == c)
	{
		printf_s("Number 2 and Number 3 are Equal");
	}
	return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
