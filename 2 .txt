#include<iostream>
# define pie 3.14;
using namespace std;

double v(double a,double b=2){
     double x=b*b*a*pie;
	return x;	
}
int main(){
	double c,d;
	cin>>c>>d;
	cout<<"v is :"<<v(c)<<endl;
	cout<<"v is :"<<v(d)<<endl;
	return 0;
}
