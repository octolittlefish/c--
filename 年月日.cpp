#include<iostream>
using namespace std;
class Date{
	public:
		Date(int y=2000,int m=1,int d=1):year(y),month(m),day(d){}
		void getDate();
	private:
		int year;
		int month;
		int day;	
};
void Date::getDate(){
	if(month<=12&&day<=31){
	  cout<<day<<"/"<<month<<"/"<<year;
	}else{
		cout<<"输入不正确"<<endl;
	}

}
int main(){
	int a,b,c;
	a=b=c=0;
	cout<<"请输入年 月 日"<<endl;
	cin>>a>>b>>c;
	Date date=Date(a,b,c);
	date.getDate();
	return 0;
}
