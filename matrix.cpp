#include<iostream>
using namespace std;

class Matrix
{
	private:
		int a[20][20],row,col;
	public:
		Matix(){}
		Matrix(int a,int b)
		{
			row =a; col =b;
		}
		void read_mat();
		Matrix operator +(Matrix m2);
		Matrix operator -(Matrix m2);
		int operator == (Matrix m2);
		int operator& operator <<(ostream& , const Matrix &);
};


void Matrix::read_mat()
{
	cout<<"enter the Matrix elements"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
}


int Matrix::operator == (Matrix m2)
{
	if(row==m2.row && col==m2.col)
		return 1;
	else
		return 0;
}


Matrix Matrix::operator + (Matrix m2)
{
	Matrix m3(row,col);
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			m3.a[i][j]= a[i][j] + m2.a[i][j];
			
		}
	}
	return m3;
}

Matix Matrix:: operator ~(Matrix m2)
{
	Matrix m3(row,col);
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			m3.a[i][j]= a[i][j] - m2.a[i][j];
			
		}
	}
	return m3;
}




ostream& operator << (ostream& out,const Matrix &m)
{
	for(int i=0;i<m.row;i++)
	{
		for(int j=0;j<m.col;j++)
		{
			out<<m.a[i][j]<<"\t";
			out<<endl;
		}
	}
	return out;
}


int main()
{
	int m,n,p,q,x;
	cout<<"enter order of mat1 \n";
	cin>>m>>n;
	Matrix m1(m,n);
	cout<<"enter order of mat2\n";
	cin>>p>>q;
	Matrix m2(p,q);
	if(m1==m2)
	{
		m1.read_mat();
		m2.read_mat();
		Matrix m3=m1+m2;
		
	}
}
