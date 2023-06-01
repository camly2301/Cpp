#include <iostream>
using namespace std;

class Car{
	public:
	int yearModel;
	string make;
	int speed;
	Car(){}
	Car(int yearModel, string make){ // hàm khoi tao
		this -> yearModel = yearModel;
		this -> make = make;
		this->speed = 0;
	}
	// cac ham getter
	int getYearModel(){
		return yearModel;
	}
	
	string getMake(){
		return make;
	}
	
	int getSpeed(){
		return speed;
	}

	
	void accelerate(){ // ham gia toc
		speed += 5;
	}
	
	void brake(){	// ham phanh
		speed -= 5;
	}
	
	void currentSpeed(){
		cout<< "Current speed: " << getSpeed() << endl;
	}
};

int main()
{
	Car car1(2021, "Honda");
	cout<<"Thong tin xe: Year Model: " <<car1.getYearModel() << "\tMake: "<< car1.getMake() <<endl;

	car1.currentSpeed();
	cout<<"\nTang toc xe \n";
	car1.accelerate();
	car1.accelerate();
	car1.accelerate();
	car1.accelerate();
	car1.accelerate();
	car1.currentSpeed();

	cout<<"\nPhanh xe \n";
	car1.brake();
	car1.brake();
	car1.brake();
	car1.brake();
	car1.brake();
	car1.currentSpeed();
	
	return 0;
}
