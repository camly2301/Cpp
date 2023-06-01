#include<iostream>
using namespace std;

class Circle
{
	private:
	double radius;
	double pi = 3.14159;
	public:
	Circle(){
		radius = 0.0;
	}
	Circle(double radius, double pi){
		this->radius = radius;
		this->pi = pi;
	}
	void setRadius(double radius){
		this->radius = radius;
	}
	double getRadius(){
		return radius;
	}
	double getArea(){
		return pi*radius*radius;
	}
	double getDiameter(){
		return radius*2;
	}
	double getCircumference(){
		return  2*pi*radius;
	}
};

int main(){
	
	double radius;
	cout << "Nhap ban kinh hinh tron: ";
	cin >> radius;
	Circle circle;
	circle.setRadius(radius);
	cout << "\nDuong kinh hinh tron la: "<<circle.getDiameter();
	cout << "\nDien tich hinh tron la: "<<circle.getArea();
	cout << "\nChu vi hinh tron la: "<<circle.getCircumference();
	return 0;
}
