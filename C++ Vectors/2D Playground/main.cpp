//TODO: Write a function that receives two integer matrices and outputs
// the sum of the two matrices. Then in your main() function, input a few
// examples to check your solution. Output the results of your function to
// cout. You could even write a separate function that prints an arbitrarily
// sized matric to cout.
#include <iostream>
#include <vector>
#include<string>
using namespace std;

vector< vector<int> > matrixsum(vector< vector<int> > matrix1, vector< vector<int> > matrix2);
void matprint(vector< vector<int> > res);
int main()
{
    // declare two matrices
	vector < vector <int> > matrix1 (5, vector <int> (3, 2));
	vector < vector <int> > matrix2 (5, vector <int> (3, 26));

	//declare an empty matrix to hold the result
	vector < vector <int> > matrixresult;

	//calculate the sum of the two matrices
	matrixresult = matrixsum(matrix1, matrix2);

	// call the matrix print function to print out the results
	matprint(matrixresult);

	return 0;
}

vector< vector<int> > matrixsum(vector< vector<int> > matrix1, vector< vector<int> > matrix2)
{
    vector< vector<int> > matrixres(matrix1.size(),vector<int>(matrix1[0].size(),0));
    for (int row =0; row < matrix1.size(); ++row)
    {
        for (int col=0; col<matrix1[0].size();++col)
        {
            matrixres[row][col]=matrix1[row][col] + matrix2[row][col];

        }
    }
    return matrixres;
}
void matprint(vector< vector<int> > res)
{
    for (int row =0; row < res.size(); ++row)
    {
        for (int col=0; col<res[0].size();++col)
        {
            cout <<res[row][col] << ' ';

        }
        cout<<endl;
    }

}
