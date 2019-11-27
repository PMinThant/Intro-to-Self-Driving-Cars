#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    vector < vector <int> > matrix (5,vector <int> (3,2));
    vector <int> row;


    ofstream outputfile;
    outputfile.open("martrixoutput.txt");

    if(outputfile.is_open()){
        for(int row = 0; row < matrix.size(); row++){
            for(int column = 0; column < matrix[row].size();column++){
                if(column != matrix[row].size()-1){
                    outputfile << matrix[row][column]<<", ";
                }
                else{
                    outputfile << matrix[row][column];
                }
            }
            outputfile<<endl;

    }
}
outputfile.close();
return 0;
}
