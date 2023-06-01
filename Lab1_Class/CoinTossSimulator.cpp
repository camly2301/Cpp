#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Coin
{
	private:
	string sideUp;
	
	public:
	Coin(){
		toss();
	}
	void toss(){ // ham tung dong xu 
		if(rand()%2==0){
			sideUp = "heads";
		}else{
			sideUp = "tails";
		}
	}
	string getSideUp(){
		return sideUp;
	}
	
};

int main(){
	srand(time(NULL));
	Coin coin;
	cout<<"The side facing up initially is: "<<coin.getSideUp()<<endl;
	int headsCount = 0;
	int tailsCount = 0;
	
	for(int i = 1; i <= 20; i++){
		coin.toss();
		cout<<"Toss "<<i<<" is: "<<coin.getSideUp()<<endl;
		if(coin.getSideUp()=="heads"){
			headsCount +=1;
		}else{
			tailsCount +=1;
		}
	}
	cout<<"\nHeads Count: "<<headsCount;
	cout<<"\nTails Count: "<<tailsCount;
	return 0;
}
