#include <iostream>
using namespace std;

int main()
{
	double x, y;
		cout<<"Enter x,y : "<<endl;
		cin>>x>>y;
	try{
		if(y == 0){
			throw "LOI CHIA 0";
		}
		double z = x/y;
		cout<<z;
	}
	catch(char *e){
		cout<<e;
	}
	cout<<"ket thuc chuong trinh\n";
	return 0;
}
