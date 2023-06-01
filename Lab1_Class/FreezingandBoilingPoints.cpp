#include<iostream>
using namespace std;

class Temperature 
{
	
	int temp;
	public:
	int getTemp(){
		return temp;
	}
	void setTemp(int temp){
		this -> temp = temp;
	}
	
	bool isEthylFreezing(){
		if(temp <= -173){
			return true;
		} else {
			return false;
		}
	}
	
	bool isEthylBoiling(){
		if(temp >= 172){
			return true;
		} else {
			return false;
		}
	}
	
	bool isOxygenFreezing(){
		if(temp <= -362){
			return true;
		} else {
			return false;
		}
	}
	
	bool isOxygenBoiling(){
		if(temp >= -306){
			return true;
		} else {
			return false;
		}
	}
	
	bool isWaterFreezing(){
		if(temp <= 32){
			return true;
		} else {
			return false;
		}
	}
	
	bool isWaterBoiling(){
		if(temp >= 212){
			return true;
		} else {
			return false;
		}
	}
	
};

int main(){
	
	Temperature temp;
	int temperature;
	cout<<"Enter a temperature: ";
	cin>>temperature;
	temp.setTemp(temperature);
	cout<<"At temperature: "<<temp.getTemp()<<endl;
//	cout<< temp.isEthylBoiling()<<" "<<temp.isEthylFreezing()<<" "<<temp.isOxygenBoiling()<<" "
//	<<temp.isOxygenFreezing()<<" " <<temp.isWaterBoiling()<<" "<< temp.isWaterFreezing();
	if(temp.isEthylFreezing()){
		cout<<"Ethyl Alcohol will freeze\n" ;
	} else if(temp.isEthylBoiling()){
		cout<<"Ethyl Alcohol will boil\n";
	}
	
	if(temp.isOxygenFreezing()){
		cout<<"Oxygen will freeze\n" ;
	} else if(temp.isOxygenBoiling()){
		cout<<"Oxygen will boil\n";
	}
	
	if(temp.isWaterFreezing()){
		cout<<"Water will freeze\n" ;
	} else if(temp.isWaterBoiling()){
		cout<<"Water will boil\n";
	}
	
	return 0;
}
