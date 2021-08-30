//A Program to find the quotient , product, difference, total.
#include <stdio.h>
#include <conio.h>


int main()
{
	// Write a program to find the Quotient , Product , Difference , Total.
	int fn, sn, quot, prod, dif, tot;
	printf("Enter First Number \n");
	scanf_s("%d", &fn);
	printf("Enter Second Number");
	scanf_s("%d", &sn);

	quot = fn / sn;
	prod = fn * sn;
	dif = fn - sn;
	tot = fn + sn;
	printf("Quotient is : %d\n", quot);
	printf("Product is : %d\n", prod);
	printf("Difference is : %d\n", dif);
	printf("Total is : %d\n", tot);
}