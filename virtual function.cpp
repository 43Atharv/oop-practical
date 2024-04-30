#include<iostream>
using namespace std;
class base
{
	public:
		void disp()
		{
			cout<<"function of base class"<<endl;
		}
};
class derived:virtual public base
{
	public:
		void disp()
		{
			cout<<"function of derived class "<<endl;
			
		}
};
int main()
{
	derived d1;
	d1.disp();
	return 0;
}

