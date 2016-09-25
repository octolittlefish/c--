#include<iostream>
 using namespace std;
 class student{
 	public:
 		void display();
 	private:
	 int num;
	 string name;
	 char sex;	
 };
 
 void student::display(){
 	cout<<"num:"<<num<<endl;
               
 	cout<<"name"<<name<<endl;
 	
 	cout<<"sex"<<sex<<endl;
 }

 int main(){
 	student stud1;
     stud1.display();
 	return 0;
 	
 } 
