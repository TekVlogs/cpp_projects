#include <iostream>

using namespace std;

namespace ns{
	int x;
	char *dd;
	void printFunc(char *x)
	{
		cout << "Hello  " << x << endl;
	
	}
	struct myData
	{
		int tv;
		char *vc;
	};
};



int main(void)
{
	ns::x = 100;
        ns::dd = (char *)malloc(sizeof(char) * 10);	
	ns::dd = "Hello user";
	ns::printFunc("User");
	struct ns::myData mdata;
	mdata.tv=100;
	mdata.vc = (char *)malloc(sizeof(char) * 10);
	mdata.vc ="Hello user";
	cout << ns::x << endl;
	cout << ns::dd << endl;
	cout << mdata.tv << endl;
	cout << mdata.vc << endl;
	

}
