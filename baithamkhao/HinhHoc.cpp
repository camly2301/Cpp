#include<iostream>
using namespace std;

class HinhHoc{
    private:
        string color;

    public: 
        HinhHoc(){
           this-> color = "No color";
        }
        HinhHoc(string c){
            this -> color = c;
        }
        string getColor(){
            return this -> color;
        }
        virtual float getArea()=0;
};
class HinhChuNhat: public HinhHoc{
    private:
        float width;
        float height;
    
    public:
        HinhChuNhat(){
            this->width = 0.0;
            this->height = 0.0;
        }
        HinhChuNhat(float w, float h, string c):HinhHoc(c){
            this-> width = w;
            this-> height = h;
        }
        float getArea() override{
            return width*height;
        }
        void display(){
            cout << "Color: " << getColor() << endl;
            cout << "Width: " << this->width  << endl;
            cout << "Height: " << this-> height << endl;
            cout << "Area: " << getArea() << endl;
        }
};

int main(){
    HinhChuNhat h1(2.5, 3.5, "blue");
    h1.display();
    return 0;
}
