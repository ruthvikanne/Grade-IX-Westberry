// This Program Swaps Numbers.
#include <stdio.h>
#include <conio.h>

int main()
{
    int fn, sn, temp;
    printf_s("Enter First Number");
    scanf_s("%d", & fn);
    printf_s("Enter Second Number");
    scanf_s("%d", & sn);

    temp = sn;
    sn = fn;
    fn = temp;

    printf_s("Swaping...");
    printf_s("Fist Number is : %d\n", fn);
    printf_s("Second Number is : %d", sn);
}