#include<stdio.h>

struct Demo
{
    int no;
    float f;
    int *p;
    int *q;
};

int main()
{
    struct Demo obj;
    int i = 11;
    float mark = 90.9;

    obj.no = 51;
    obj.f = 3.14;
    obj.p = &i;
    obj.q = &mark;

    printf("%d\n",*(obj.p));
    printf("%f\n",*(obj.q));

    return 0;
}