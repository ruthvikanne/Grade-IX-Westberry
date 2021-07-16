#include<stdio.h>
#include<conio.h>
#include<iostream>

int main(void)
{
	printf("Hi /n");
	printf("Enter Your Role Number");
	long rno;
	scanf_s("%d", &rno);// %d is integer type data 
	printf("Your Role Number Is : " + rno);
}