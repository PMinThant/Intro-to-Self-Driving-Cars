#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector < vector <int> > twodvector;
    vector<int> singlerow (3,2);
    for (int i = 0; i < 5; i++) {
        twodvector.push_back(singlerow);
    }
    for (int row = 0; row < twodvector.size(); row++) {
        for (int column = 0; column < twodvector[0].size(); column++){
            cout << twodvector[row][column] << " ";}


        cout << endl;
    }
    return 0;
}
