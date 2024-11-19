#include <stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    float f;
    char ch;
    double d;
}; // sumation of all element

union Hello
{
    int i;
    float f;
    char ch;
    double d;
}; // consider largest element 8

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("%lu\n", sizeof(dobj));
    printf("%lu\n", sizeof(hobj));

    return 0;
}