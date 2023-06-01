#include<iostream>
#include<stdio.h>
using namespace std;

class Car
{
	private:
		string id;
		string *name;
		double price;
	public:
		Car(){}
		Car(string ID, string Name, double Price)
		{
			id = ID;
			name = new string();// cap phat bo nho cho name
			*name = Name;
			price = Price;
		}
		void display()
		{
			cout <<  id << "\t"<< *name <<"\t"<< price << endl;
		}
		~Car()
		{
			delete[] name; // thu hoi bo nho da cap cua name
		}
		void nhap()
		{
			cout<<"Enter ID" <<endl;
			cin>>id;
			cout<<"Enter Name" << endl;
			fflush(stdin);	//giai phong bo dem ban phim , phim enter
			name = new string();
			getline(std::cin, *name);
			cout<<"Enter price: "; 
			cin >> price;
		}
		
		
};

int main()
{
	Car *x = new Car();
	x->nhap();
	x->display();
	
	Car x1;
	x1.nhap();
	x1.display();
	
}

