#include <iostream>
using namespace std;

// Ham kiem tra so hoan hao
bool isPerfect(int n) {
    int sum = 1; 						// tong cac uoc so
    for (int i = 2; i <= n / 2; i++) { // tim cac uoc so cua x
        if (n % i == 0) {  				//i là 1 uoc so
            sum += i;					// cong uoc so i vao tong sum
        }
    }
    if( sum == n)
    	return true;
    else 
    	return false;
    	
//    return sum == n;
}

void inSoHoanHao(int n){
	for( int i = 2; i <= n; i++){
		if(isPerfect(i)){
			cout << i << " ";
		}
	}
}

// ham tinh tong cac chu so
int TongChuSo(int n){
	int s = 0;
	while (n > 0){
		s = s + n%10;
		n = n / 10;
		
	}
	return s;
}

//ham hoan doi gia tri 2 so
void HoanDoi(int &x, int &y){ // de luu lai gia tri cua x y
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	int n, x, y;
	int choice;
	do{
		cout << endl << "1. So hoan hao" << endl;
		cout << "2. Tong cac chu so" << endl;
		cout << "3. Hoan doi gia tri cua 2 so" << endl;
		cout << "0. Thoat" << endl;
		cout << "------------------" << endl;
		cout << "Moi ban chon chuong trinh: ";
		cin >> choice;
			switch(choice){
		case 1:
			cout << "Nhap 1 so nguyen n: ";
			cin >> n;
			cout << "Cac so hoan hao la: ";
			inSoHoanHao(n);
			
			break;
		case 2:
			cout << "Nhap 1 so nguyen n: ";
			cin >> n;
			cout << "Tong cac chu so cua " << n << " la: " << TongChuSo(n) ;
			break;
		case 3:
			x = 3; y = 5;
			cout << "Truoc khi doi x = " << x << " y = " << y ;
			HoanDoi(x,y);
			cout << "\nSau khi doi x = " << x << " y = " << y ;
			break;
		case 0:
			break;
		default:
			cout << "khong co du lieu";
		}
	}
	while(choice != 0);

	return 0;
}



