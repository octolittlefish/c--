#include<iostream>
using namespace std;
class Time{
	public:
		int hour;
		int minute;
		int sec;
		void get_time();
		//Time(int h=2,int m=2,int s=2):hour(h),minute(m),sec(s){
		//}                                  
		Time(){
			hour=0;minute=0;sec=0;
		}
		void set_time(int h,int m,int s){
			hour=h;minute=m;sec=s;
		}      //与9 10 行同作用
		void fun(){
			cout<<"ok"<<endl;
		}
		
};
void Time::get_time(){
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
} 
int main(){
	Time *p;
	Time t1;
	p = &t1;
	  (*p).set_time(4,4,4);
	 //*p=Time(3,3,3);
	(*p).get_time();//p->get_time();
	
	int *p1;
	//p1=&t1.hour;
	*p1=t1.hour;
	cout<<*p1<<endl;
	
	void(Time::*p2)()=&Time::get_time;//41 42行合写为一行后可运行 
	(t1.*p2)();

	/*void(Time::*p3)();
	p3=&Time::get_time;
	(t1.*p3)();*///不可运行  喵 ？？？ 
	
	t1.fun();	
	
	return 0;
}
