#include<iostream>
using namespace std;

class RetailItem 
{
	private:
	string description;
	int unitsOnHand;
	double price;
	
	public:
	RetailItem(){}
	RetailItem(string description, int unitsOnHand, double price){
		this -> description = description;
		this -> unitsOnHand = unitsOnHand;
		this -> price = price;
		
	}
	
	string getDescription(){
		return description;
	}
	
	void setDescription(string description){
		this->description = description;
	}
	 int getUnitsOnHand(){
	 	return unitsOnHand;
	 }
	 
	 void setUnitsOnHand(int unitsOnHand){
	 	this -> unitsOnHand = unitsOnHand;
	 }
	 
	 double getPrice(){
	 	return price;
	 }
	 
	 void setPrice(double price){
	 	this -> price = price;
	 }
	
};
int main(){
	RetailItem item1("Jacket", 12, 59.95);
	RetailItem item2("Designer Jeans", 40, 34.95);
	RetailItem item3("Shirt", 20, 24.95);
	
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"\t\tDescription \tUnits of Hand \tPrice "<<endl;
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"Item #1 \t"<<item1.getDescription()<<"\t\t"<<item1.getUnitsOnHand()<<"\t\t"<<item1.getPrice()<<endl;
	cout<<"Item #2 \t"<<item2.getDescription()<<"\t"<<item2.getUnitsOnHand()<<"\t\t"<<item2.getPrice()<<endl;	
	cout<<"Item #3 \t"<<item3.getDescription()<<"\t\t"<<item3.getUnitsOnHand()<<"\t\t"<<item3.getPrice()<<endl;
	
	return 0;
}

