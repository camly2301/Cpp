#include<iostream>
using namespace std;

template <class T>
T square(T n){
	return n * n;
}

template <class T>
T cong(T a,T b){
	return a+b;
}

template <class T>
T tru(T a,T b){
	return a-b;
}

template <class T>
T nhan( T a, T b){
	return a*b;
}

template <class T>
T chia( T a, T b){
	return a/b;
}

int main(){
	int x = 5, y=3;
	y = square(x); // goi ham theo kieu int
	cout<<y<<endl;
	double z = square(5.5); // goi ham theo kieu double
	cout<<z<<endl;

	int cong1 = cong(3,4);
	cout<<"Cong: "<<cong1<<endl;
	double tru1 = tru(30.5, 11.2);
	cout<<"Tru: "<<tru1<<endl;
	int nhan1 = nhan(3, 9);
	cout<<"Nhan: "<<nhan1<<endl;
	double chia1 = chia(21.5, 7.0);
	cout<<"Chia: "<<chia1<<endl;
	
	return 0;
}
