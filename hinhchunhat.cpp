#include <iostream>
using namespace std;
class Rectangle
{
		int width;
	public:
		int length;
		void setWidth(int width){
			this->width = width;
		}
		int Area(){
			return width * length;
		}
		int ChuVi(){
			return (width + length) * 2;
		}
};
int main(){
	Rectangle h1, h2;
	h1.setWidth(5);
	h1.length = 2;
	h2.setWidth(10);
	h2.length = 15;
	cout<<"\nDien tich hinh 1: "<< h1.Area();
	cout<<"\nChu vi hinh 1: " << h1.ChuVi();
	cout<<"\nDien tich hinh 2: "<< h2.Area();
	cout<<"\nChu vi hinh 2: " << h2.ChuVi();
	
	return 0;
}
