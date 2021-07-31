// Total and Average Marks
#include <stdio.h>
#include <conio.h>

int main()
{
	int mm, sci, soc, tm , avg;
	printf(" Enter Maths Marks ");
	scanf_s("%d",&mm);
	printf(" Enter Science Marks ");
	scanf_s("%d", &sci);
	printf(" Enter Social Marks ");
	scanf_s("%d", &soc);
	tm = mm + sci + soc;
	avg = tm / 3;
	printf("Your Total Marks are: %d\n",tm);
	printf("Your Average Marks Are : %d",avg);
}