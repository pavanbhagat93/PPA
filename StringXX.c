#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = "Python";
    char *str = Arr;

    printf("%c",*str); // p
    str++;
    printf("%c",*str); // y
    str++;
    printf("%c",*str); // t
    str++;
    printf("%c",*str); // h
    str++;
    printf("%c",*str);  // o


    return 0;
}