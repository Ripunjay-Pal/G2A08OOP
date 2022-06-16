#include<iostream>
using namespace std;

class parent
{
    private:
		int pri = 7;
	protected :
		int pro = 8;
	public :
		int pub = 9;
};

class child : public parent
{
	public:
	child()
	{
		//cout << pri << endl;
  		cout << pro << endl;
		cout << pub << endl;
	}
};

int main()
{
	child c1;
	return 0;
}