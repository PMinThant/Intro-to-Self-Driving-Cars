#include <iostream>
#include <vector>
using namespace std;
//function declare
vector<int> vectorsub(vector<int>i,vector<int>j);
vector<int> vectormul(vector<int>i,vector<int>j);
int main()
{
    vector<int> i(3);
    vector<int> j(3);
    i[0]=5;
    i[1]=10;
    i[2]=12;

    j[0]=2;
    j[1]=17;
    j[2]=12;

    vector<int> p;
    vector<int> m;
    p=vectorsub(i,j);
    m=vectormul(i,j);
    //Display
    for(int no=0; no<i.size(); ++no){
        cout<< p[no] << " ";

    }
    cout << endl;
    for(int no=0; no<i.size(); ++no){
        cout<< m[no] << " ";

    }
    cout << endl;

    return 0;
}
vector<int> vectorsub(vector<int>i,vector<int>j)
{
    vector<int>result(i.size());
    for (int n= 0; n<i.size();++n)
    {
        result[n] = i[n]-j[n];
    }
    return result;
}

vector<int> vectormul(vector<int>i,vector<int>j)
{
    vector<int>result(i.size());
    for (int n= 0; n<i.size();++n)
    {
        result[n] = i[n]*j[n];
    }
    return result;
}
