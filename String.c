#include<stdio.h>
#include<string.h>

int main()
{
    char arr[] = {'H','e','l','l','o','\0'};

    char brr[] =  "hello";

    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(brr));

    printf("Length of string is :%d\n",strlen(arr));
    printf("Length of string is :%d\n",strlen(arr));
     
    return 0;
}