#include<stdio.h>
#include<stdlib.h> //standard library

int main()
{
    int *ptr = NULL;
    //step 1 : Allocate the memory
    ptr = (int *)calloc(5,sizeof(int));

    //Step 2: Use the memory

    // Step 3 : Deallocate the meomory
    free(ptr);
    
    return 0;
}