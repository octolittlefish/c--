#include<iostream>
using namespace std;
class Box{
	public:
		Box(int h=10,int w=10,int len=15):height(h),width(w),length(len){
		}
	     int volume();
	private:
		int height;
		int width;
		int length;
}; 
int Box::volume(){
	return height*width*length;
}
int main(){
	int b[9]={0};
	cout<<"请输入3个长方体的长宽高 格式:长 宽 高 长 宽 高 长 宽 高"<<endl;
	for(int i=0;i<9;i++){
		cin>>b[i];
	}
	Box a[3]={
	Box(b[0],b[1],b[2]),
	Box(b[3],b[4],b[5]),
	Box(b[6],b[7],b[8])};
	cout<<a[0].volume()<<endl;
	cout<<a[1].volume()<<endl;
	cout<<a[2].volume()<<endl;
	return 0;
}
