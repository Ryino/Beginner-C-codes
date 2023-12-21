#include <iostream>
using namespace std;

class matrix
{private:
	int row, col;
	int mat1['i']['j'];
	int mat['i']['j'];

	public:
		matrix()
		{
			int row = 2;
			int col = 2;

		}

		matrix(int r, int c)
		{
			row = r;
			col = c;
		}
	
	
		void setElem()
		{
			cout << "Enter elemnts of matrix 1:";
			
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "\nEnter element:\n";
					cin >> mat[i][j];
				}
			}
			cout << "Matrix 1 elements are : " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << mat[i][j] << endl;
				}
			}
		}

		
		void setElem2()
		{
			cout << "Enter elemnts of matrix 2:";
		
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "\nEnter Element:\n";
					cin >> mat1[i][j];
				}
			}
			cout << "Elements of matrix 2 is: " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << mat1[i][j] << endl;
				}
			}
	
	}
		void addMat() 
		{
			int addArray['i']['j'];
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					addArray[i][j] = mat[i][j] + mat1[i][j];

				}
			}
			cout << "Addition of the two matrices is : " << endl;
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					cout << addArray[i][j] << endl;
				}
			}


	}

		void multMat() {
			int multArray['i']['j'];
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					multArray[i][j] = mat[i][j] * mat1[i][j];

				}
			}
			cout << "Multiplied result: " << endl;
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					cout << multArray[i][j] << endl;
				}
			}


		}
	

	


};


int main()
{
	matrix();
	cout << "Enter Number of rows:";
	int row;
	cin >> row;

	cout << "\nEnter number of coloumns:";
	int col;
	cin >> col;


	

	matrix m1(row,col);
	
	//m1 = matrix(row,col);
	//int mat1;

	m1.setElem();

	m1.setElem2();
	m1.addMat();
	m1.multMat();




}
