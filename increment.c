#include <stdio.h>

int main()
{
    int A = 10, B = 10;
    int No1 = 0, No2 = 0;

    No1 = A++; // post increment (First initalize then increment)
    printf("Value of No1 : %d \n", No1);
    printf("Value of A : %d \n", A);

    No2 = ++B; // pre increment
    printf("Value of No2 : %d \n", No2);
    printf("Value of B : %d \n", B);

    return 0;
}