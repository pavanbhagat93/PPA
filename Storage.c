#include<stdio.h>

int value = 11;//e
int Data;

void Demo()
{
    int i = 10;
    static int j = 20;
    register int  k = 30;

    printf("Inside Demo function\n");

}



int main()
{
    int *p = NULL;
    p = (int *)malloc(5*sizeof(int)); 

    Demo();

    return 0;
}
