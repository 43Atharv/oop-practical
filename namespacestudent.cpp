#include<iostream>
using namespace std;
class Student{
	int age;
	int roll_no;
	string name;
	
	public: Student(){
		
		age= 20;
		roll_no= 38;
	    name= "Atharv";
		
	}

	void printdata()
	{
		cout<<"AGE:"<<age<<endl;
		cout<<"ROLL_NO:"<<roll_no<<endl;
		cout<<"NAME:"<<name<<endl;
	}
	void getdata()
	{
		cout<<"ENTER THE AGE:"<<endl;
		cin>>age;
		cout<<"ENTER THE ROOL_NO:"<<endl;
		cin>>roll_no;
		cout<<"ENTER THE NAME:"<<endl;
		cin>>name;
	}
};
int main()
{
	Student s1;
	s1.printdata();
	return 0;
}

