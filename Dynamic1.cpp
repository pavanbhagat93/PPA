#include<iostream>
using namespace std;


int main()
{
    int arr[5]; // Static memory

    int *ptr = NULL;

    //Step 1 : Allocate the memory
    ptr = new int[5];

    //Step 2 : Use the memory
    //Logic

    //Step 3 : Deallocate the meomory
    delete []ptr;

    return 0;

}