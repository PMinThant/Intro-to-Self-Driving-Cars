#include <iostream>
using namespace std;
int main() {

    /*
    * TODO: Use this as a playground for writing if, else if and else statements
    * To get you started here, are some ideas:
    *
    * 1. Create an integer variable and a set of if, elseif and else statements that
    * output whether the number is positive or negative.
    *
    * 2. Create a character variable containing 'a' for acceleration, 'b' for braking,
    * 'p' for parked, or 'n' for neutral and outputs whether or not the vehicle is accelerating, braking,
    * parked or in neutral.
    *
    * Practice Using Boolean Logic
    *
    * You can see an example solution in the solution.cpp file
    */
    int x = 3;
    if(x>0)
    {
        cout<<"Positive"<<endl;
    }
    else if (x<0)
    {
        cout<<"Negative" <<endl;
    }
    else
    {
        cout<<"Zero"<<endl;
    }
    char s = 'b';
    if(s=='a')
    {
        cout<<"accelerating"<<endl;
    }
    else if (s=='b')
    {
        cout<<"breaking" <<endl;
    }
    else if (s=='p')
    {
        cout<<"parked" <<endl;
    }
    else if (s=='n')
    {
        cout<<"neural" <<endl;
    }
    return 0;
}
