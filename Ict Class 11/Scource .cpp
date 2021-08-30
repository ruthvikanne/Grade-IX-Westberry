#include <stdio.h>
#include <conio.h>

int Main()
{
	int i,n;

	printf("Enter The Number Of Numbers You Want");
	scanf_s("%d", & n);
	
	for (i = 1; i <= n; i++)
	{
		printf("%d/t", i);
	}
}