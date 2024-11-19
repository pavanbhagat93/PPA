#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
        int B;

        void Fun()
        {
            cout<<"Inside Fun\n";
        }

          void Gun()
        {
            cout<<"Inside Gun\n";
        }
};

int main()
{
    Demo obj;

    obj.A = 11;
    obj.B = 21;

    obj.Fun();
    obj.Gun();

    cout<<obj.A<<"\n";
     cout<<obj.B<<"\n";

    cout<<sizeof(obj)<<"\n";

    return 0;
}