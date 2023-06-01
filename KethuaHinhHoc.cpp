#include<iostream>
using namespace std;

class HinhHoc{
	public:
	string color;
	
	HinhHoc();
	HinhHoc(string color){
		this->color = color;
	}
	void setColor(string color){
		this->color = color;
	}
	string getColor(){
		return color;
	}
	virtual float getArea(){
	}
};

class HinhChuNhat : public HinhHoc{
	public:
	float dai, rong;

		HinhChuNhat(){
		}
		HinhChuNhat(string color, float dai, float rong):HinhHoc(color){
			this->dai = dai;
			this->rong = rong;
			
		}
		void setDai(float dai){
			this->dai = dai;
		}
		float getDai(){
			return dai;
		}
		void setRong(float rong){
			this->rong = rong;
		}
		float getRong(){
			return rong;
		}
		float getArea(){
			return dai*rong;
		}
		void display(){
			cout<<"Color: "<<HinhHoc::getColor()<<endl;
			cout<<"Chieu Dai: "<<getDai()<<endl;
			cout<<"Chieu Rong: "<<getRong()<<endl;
			cout<<"Dien tich: "<<getArea()<<endl;
		}
};
int main(){
	HinhChuNhat h("Xanh", 7, 5);
	h.display();
	h.getArea();
	
	return 0;
}
