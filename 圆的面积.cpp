#include<iostream>
using namespace std;
class Circle{
	public:
		Circle(double r=1.0):radious(r){}
		double getArea();
    private:
    	     double radious;
}; 
double Circle::getArea(){
	return 3.14*radious*radious;
}
int main(){
	double radious=0.0;
	cout<<"ÇëÊäÈë°ë¾¶: "<<endl; 
	cin>>radious;
	Circle circle=Circle(radious);
	cout<<circle.getArea()<<endl;
	return 0;	
} 
