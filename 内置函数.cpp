#include<iostream>
using namespace std;
inline int max(int a,int b,int c){//���������ҪƵ�����ã�����Ϊ���ú����� 
	if(b>a) a=b;
	if(c>a) a=c;
	return a;
}

int main(){
	int i1=8,i2=9,i3=5;
	cout<<max(i1,i2,i3)<<endl;
	return 0;
}
