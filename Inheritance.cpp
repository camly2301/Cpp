#include<iostream>
using namespace std;

class PS
{
	string Name;
	int age;
	public:
		PS(){
			cout<<"\nBase class Constructor 1.\t";
		}
		PS(string name, int a){
			Name = name;
			age = a;
			cout<<"\nBase class Constructor 2.\t";
		}
		virtual void display(){
			cout<<Name<<"\t"<<age<<"\t";
		}
		virtual void khenthuong(){ // gap doi tuong nao thi lay ham khenthuong cua lop do sv là sv , gv la gv
			
		}
		
};

class SV : public PS
{
	double GPA;
	public:
		SV(){
			cout<<"\nStudent Derived class Constructor 1.\t";
		}
		SV(string n, int a, double gpa):PS(n,a)
		{
			GPA = gpa;
			cout<<"\nStudent Derived class Constructor 2.\t";
		}
		void display()
		{
			PS::display();
			cout<<GPA<<"\t";
		}
		void khenthuong(){
			if(GPA>8){
				cout<<"Gioi"<<endl;
			}
		}
		
};

class GV : public PS
{
	int salary;
	public:
		GV(){
			cout<<"\nInstructor Derived class Constructor 1\t";
		}
		GV(string n, int a, int salar):PS(n,a){
			salary = salar;
			cout<<"\nInstructor Derived class Constructor 2\t";
		}
		void display(){
			PS::display();
			cout<<salary<<"\t";
		}
		void khenthuong(){
			if(salary>10000000){
				cout<<"xuat sac"<<endl;
			}
		}
};

int main(){
//	SV s("Ly", 20, 8.5);
//	s.display();
//	cout<<endl;
//	s.khenthuong();
//	
//	GV g("Quoc", 40, 20000000);
//	g.display();
//	g.khenthuong();
	
	PS *L;
	
	L = new SV("Ly", 18, 8.5); // L là sinh vien có 2 khenthuong() o PS và SV
	cout<<endl;
	L->display();
	L->khenthuong();
	
	L = new GV("Quoc", 42, 20000000); // L là GV có 2 khenthuong() o PS và GV
	cout<<endl;
	L->display();
	L->khenthuong();
	
	return 0;
}
