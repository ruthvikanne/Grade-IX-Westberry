// Ict Class 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program to tell wheather a number is negative or positive

#include <stdio.h>
#include <conio.h>

int num;
int main()
{
	printf_s("Enter Any Number");
	scanf_s("%d", &num);
	proc();
}
int proc()
{
	if (num > 0)
	{
		printf_s("It is a Positive Number");
	}
	else if (num == 0)
	{
		printf_s("Zero is neither Positive nor Negative");
	}
	else
	{
		printf_s("It is a Negative Number");
	}
}
