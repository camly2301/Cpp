#include<iostream>
using namespace std;

void Hanoi(int n , char A, char B, char C){
	if(n == 1){
		cout<<"di chuyen dia tu cot " << A << "sang cot "<< C <<endl;
		
	}else{
		Hanoi(n-1, A, C, B);
		cout<<"Di chuyen dia tu cot " <<A << "sang cot " << C << endl;
		Hanoi(n-1, B, A, C);
	}
}

int main(){
	int number;    // so dia can di chuyen
	char a = 'A';			// cot A
	char b = 'B';			// cot B
	char c = 'C'; 		// cot C
	cout<<"Nhap n : ";
	cin>>number;
	cout<<Hanoi(number,a,b,c);
	
	return 0;
}
