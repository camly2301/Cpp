#include <iostream>
#include <stdio.h>
using namespace std;

class Employee
{
	static int dem; // thuoc tinh chung cua ca lop 
	public:
	string name;
	int *idNum; // khai bao con tro
	string department;
	string position;
	
	Employee(){		// ham khoi tao mac dinh
		name = "";
		idNum = 0;
		department = "";
		position = "";
	}  
	
	Employee(string name, int idNum, string department, string position)		// ham khoi tao 4 tham so
	{
		this->name = name;
		*(this->idNum) = idNum;  // truyen DU LIEU cho con tro *idNum, co this thi * ca this
		this->department = department;
		this->position = position;
	}
	
	Employee(string name, int idNum)		// ham khoi tao 2 tham so
	{
		this->name = name;
		this->idNum = &idNum;  // truyen DIA CHI cho bien idNum trong ham khoi tao
		department = "";
		position = "";
	}
	
	void display() 
	{
		cout<<name<<"\t"<<*idNum<<"\t\t"<<department<<"\t\t"<<position<<endl; // muon in con tro phai dung dau * 
	}
	
	void nhap() // nhap truc tiep
	{
		fflush(stdin); 				// giai phong bo dem ban phim, phai include <stdio.h>
		cout<<"Nhap ho ten: "<<endl;
		getline(std::cin, name);  // nhap ten có dau cach
		cout<<"Nhap ID: "<<endl;
		idNum = new int(); // cap phat bo nho cho con tro idNum
		cin>>*idNum;
		cout<<"Nhap Dept: "<<endl;
		cin>>department;
		cout<<"Nhap Pos: "<<endl;
		cin>>position;
	}
};
int main(){
//	Employee E1("Susan Meyers", 47899, "Accounting", "Vice President");
//	Employee E2("Mark Jones", 39119, "Infor Tech", "Programmer");
//	Employee E3("Joy Rogers", 81774, "Manufacturing", "Engineer");

	Employee E[3];
	int n = 1;
	for(int i = 0; i < n ; i++){
		cout<<"\n Nhap thong tin nhan vien thu "<<i+1<<endl;
		Employee *x = new Employee(); // tao doi tuong con tro 
		x->nhap();
		E[i] = *x;
	}

	cout<<"---------------------------------------------------------------------"<<endl;
	cout<<"Name \t\tID Number \tDepartment \t\tPosition"<<endl;
	cout<<"---------------------------------------------------------------------"<<endl;
	
	for(int i = 0; i< n ; i++)
	{
		E[i].display();
	}
	
	return 0;
}

