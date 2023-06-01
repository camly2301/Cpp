#include<iostream>
using namespace std;

class Inventory
{
	private:
	int itemNumber;
	int quantity;
	int cost;
	double totalCost;
	
	public:
	Inventory(){
		itemNumber = 0;
		quantity = 0;
		cost = 0;
		totalCost = 0;
	}
	Inventory(int itemNumber, int quantity, int cost){
		this -> itemNumber = itemNumber;
		this -> quantity = quantity;
		this -> cost = cost;
		setTotalCost(quantity, cost);
	}
	void setItemNumber(int itemNumber){
		this -> itemNumber = itemNumber;
	}
	void setQuantity(int quantity){
		this -> quantity = quantity;
	}
	void setCost(int cost){
		this -> cost = cost;
	}
	void setTotalCost(int quantity, int cost){
		this -> totalCost = quantity * cost;
	}
	int getItemNumber(){
		return itemNumber;
	}
	int getQuantity(){
		return quantity;
	}
	int getCost(){
		return cost;
	}
	int getTotalCost(){
		return totalCost;
	}
};

int main(){
	Inventory inv;
	inv.setItemNumber(1);
	inv.setCost(90000);
	inv.setQuantity(5);
	inv.setTotalCost(inv.getQuantity(),inv.getCost());
	cout<<"Item Number: "<<inv.getItemNumber()<<endl;
	cout<<"Cost: "<<inv.getCost()<<endl;
	cout<<"Quantity: "<<inv.getQuantity()<<endl;
	cout<<"Total Cost: "<<inv.getTotalCost()<<endl;
	
	return 0;
}
