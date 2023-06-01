#include<iostream>
using namespace std;


int Giaithua(int n)
{
	if( n == 0)
	{
		return 1; 
	}else {
		return n * Giaithua(n-1);
	}
}

int main()
{
	int number;
	cout<< "Nhap so n: " <<endl;
	cin>>number;
	
	cout<<"Giai thua cua "<<number<<" la :";
	cout << Giaithua(number)<<endl;
	
	return 0;
}
