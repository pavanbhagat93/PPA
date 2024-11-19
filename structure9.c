
#include <stdio.h>

struct Demo
{
    int no;
    struct Demo *ptr;
};

int main()
{
     struct Demo obj1;
     struct Demo obj2;
     struct Demo obj3;

     obj1.no = 11;
     obj2.no = 57;
     obj3.no = 14;

     obj1.ptr = &obj2;
     obj2.ptr = &obj3;
     obj3.ptr = NULL;

    return 0;
}