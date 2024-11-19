#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        virtual void Fun() // Defination // 1000
        {
            cout<<"Inside Base Fun\n";
        }
        void Gun() // 2000
        {
            cout<<"Inside Base Gun\n";
        }
        virtual void Sun() // 3000
        {
            cout<<"Inside Base Sun\n";
        }
        virtual void Run() // 4000
        {
            cout<<"Inside Base Run\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        virtual void Fun() // Redefination // 5000
        {
            cout<<"Inside Derived Fun\n";
        }
         void Gun() // 6000
        {
            cout<<"Inside Derived Gun\n";
        }
        virtual void Mun() // 7000
        {
            cout<<"inside Derived Mun\n";
        }
         void Run()
        {
            cout<<"inside Derived Run\n";
        }
};

int main()
{
    cout<<"Size of Base class :"<<sizeof(Base)<<"\n";
    cout<<"Size of Base class :"<<sizeof(Derived)<<"\n";

    Derived dobj;
    Base *bptr = NULL;
    
    bptr = &dobj; // Upcasting

    bptr->Fun(); // Derived fun call
    bptr->Gun(); // Base gun
    bptr->Sun(); // Base sun
    bptr->Run(); // base run
    //bptr->Mun(); // Error
    
    return 0;
}