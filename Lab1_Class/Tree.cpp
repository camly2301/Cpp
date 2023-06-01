#include <iostream>
using namespace std;

class Tree
{
	private:
		static int objectCount;
	public:
		Tree()
		{
			objectCount ++;
		}
		int getObjectCount() const
		{
			return objectCount;
		}
		
};
int Tree::objectCount = 0;
int main(){
	Tree Tao;
	Tree Xoai;
	Tree Oi;
	
	cout<<"so cay duoc tao ra la:"<<Tao.getObjectCount()<<endl;
	
	return 0;
}
