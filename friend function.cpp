#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length;
		int breadth;
		int area;
	public:
		rectangle()
		{
			length=10;
			breadth=5;
			
		}
		friend void print(rectangle b);

};
void print(rectangle b)
{
    cout<<"area of rectangle"<<b.length*b.breadth;
}

int main()
{
	rectangle b2;
	print(b2);
	return 0;
}
