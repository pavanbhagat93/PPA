#include<iostream>
using namespace std;


int main()
{
    //initialization
    int No1 = 10;

    const int No = 10;
    
    No1++; // Alloewed
    No2++; // Not Allowed 
    //reinitialization
    No1 = 21; // Allowed  

    No2 = 21; // Not Allowed

    return 0;
}