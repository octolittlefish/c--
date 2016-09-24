#include<iostream>
using namespace std;
template <typename T>
T max(T a,T b,T c){
	if(b>a) a=b;
	if(c>a) a=c;
	return a;
}

int main(){
	int i1=8,i2=9,i3=5;
	double d1=0.5,d2=0.35,d3=6.02;
	cout<<max(i1,i2,i3)<<endl;
	cout<<max(d1,d2,d3)<<endl;
	return 0;
}
