//TODO: include the iostream and vector libraries
#include <iostream>
#include <vector>
using namespace std;
//TODO: Use the standard namespace

int main() {

    // Part 1: declare and define a vector with values
    //        {5.0, 5.0, 5.0} and print
    //         the vector to the terminal using cout
    // Hint: the syntax vector<datatype> varname(length, value) might help
    vector<float> i(3,5.0);
    for (int k=0; k<i.size();++k)
    {
        cout<<i[k]<<endl;
    }

    // Part 2: Use push back to add the values 3.0, 2.5, 1.4
    //      to the back of the vector
    i.push_back(3.0);
    i.push_back(2.5);
    i.push_back(1.4);



    // Part 3: Print out the vector again using cout
    for (int k=0; k<i.size();++k)
    {
        cout<<i[k]<<endl;
    }

    // Part 4: Use the vector assign method to override the current vector.
    // The overriden vector should have 3 elements with
    // the values {5.0, 5.0, 5.0}
    i.assign(5.0,3);


    // Part 5: Print out the vector
    for (int k=0; k<i.size();++k)
    {
        cout<<i[k]<<endl;
    }

    return 0;
}
