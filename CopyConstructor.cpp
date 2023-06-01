#include<iostream>
using namespace std;

class OBJ
{
	public:
	int *value;
	OBJ(int val = 0){
		value = new int();   // cap phat bo nho moi cho value
		*value = val;
	}
	
	void setVal(int val){
		*value = val;
	}
	
	OBJ(const OBJ &ob)  //  ham dung copy
	{
		value = new int(); // cap phat bo nho moi cho value
		*value = *ob.value;
	}
	void operator+(const OBJ &obj)  // dinh nghia phep toan tu +
	{
		*value = *value + *obj.value;
	}
	void operator-(const OBJ &obj)  // dinh nghia phep toan tu -
	{
		*value = *value - *obj.value;
	}
	
};
int main(){
	OBJ o1 = OBJ(5); // o1 = 5
	OBJ o2 = o1;  // o2 = 5 ,o1 gan o1 vao o2 , tao o2 y chang o1
	o2.setVal(13);  // o2 = 13

	cout<<"Value of o1: " <<*o1.value<<endl; // 5
	cout<<"Value of o2: " <<*o2.value<<endl; // 13
	o2 + o1;  // gia tri o2 = o2+o1, lenh nay cung duoc: o2.operator+(o1)
	
	cout<<"Value of o1 after + : " <<*o1.value<<endl; //5
	cout<<"Value of o2 after + : " <<*o2.value<<endl; //18
	cout<<"Phep cong: "<< o2+o1;
	o2 - o1;
	cout<<"Value of o1 after - : " <<*o1.value<<endl; //5
	cout<<"Value of o2 after - : " <<*o2.value<<endl; //18
	return 0;
}
