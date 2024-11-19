#include <stdio.h>
int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int x = 10;
    int length = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[length] ;
    for (int i = 0; i < 6; i++)
    {
        if (arr1[i] % x == 0)
        {
           arr2[i] = arr1[i];    
        }
    }

    for(int i = 0 ; i < length;i++)
    {
        printf("%d",arr2[i]);
    }
}