#include <stdio.h>
//  function Defination
int addition(int value1, int value2) 
{
    int result = 0;   //  Local variable
 
    result = value1 + value2;

    return result;
}

int main()  // Entry point function
{
    int No1 = 0, No2 = 0, ans = 0; // Local variable

    printf("Enter first number : \n");
    scanf("%d", &No1);

    printf("Enter second number : \n");
    scanf("%d", &No2);

    ans = addition(No1, No2);  // Function call

    printf(" addition id : %d \n", ans);

    return 0;
}