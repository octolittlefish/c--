#include<iostream>
using namespace std;
void swap(int &p1,int &p2){           //p1����a������, p2����b������ 
	int temp;
	temp=p1;
	p1=p2;
	p2=temp;
}
int main(){
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	return 0;
}
