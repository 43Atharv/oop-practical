#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int add(int a,int b,int c)
{
	return a+b+c;
}
float add(float a,float b)
{
	return a+b;
}
int main()
{
	int a,b,c;
	float x,y;
	cout<<"enter the integer value of ab"<<endl;
	cin>>a>>b>>c;
	cout<<"enter the floar value if x and y"<<endl;
	cin>>x>>y;
	cout<<"addition of two integer value is:"<<add(a,b)<<endl;
	cout<<"addition of three intger value is:"<<add(a,b,c)<<endl;
	cout<<"addition of two float value is :"<<add(x,y)<<endl;
	return 0;
}
