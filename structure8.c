#include <stdio.h>

struct Demo
{
    int no;
    float f;
};

int main()
{
    struct Demo Arr[3]; // each element

    Arr[0].no = 11;
    Arr[0].f = 11.1;

    Arr[1].no = 11;
    Arr[1].f = 11.1;

    Arr[1].no = 11;
    Arr[1].f = 11.1;

    
    return 0;
}