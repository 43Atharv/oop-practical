#include<iostream>
#include<string>
#include<list>
using namespace std;
class ytchannel{
    string name;
    
	int no_of_user;
	public:
	ytchannel(string nm,int user)
	{
		name=nm;
		no_of_user=user;
	}
};
int main()
{
	Youtube channel yc1("dkte",1200);
	Youtube channel yc2("cse",500);
	Mycollection mc;
	mc+=yc;
	return 0;
}
