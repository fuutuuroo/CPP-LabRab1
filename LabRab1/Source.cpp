#include <iostream> 
using namespace std;
#include "task.h"

/*
struct task
{
	int first, second;
	void init(int f, int s)
	{
		first = f;
		second = s;
	}
	void read()
	{
		cout << "insert first ";
		cin >> first;
		cout << "insert second ";
		cin >> second;
		cout << endl;
	}
	void show()
	{
		cout << "first = " << first << endl;
		cout << "second = " << second << endl;
	}
	int ipart()
	{
		int res;
		if (second != 0) {
			res = first / second;
		}
		else {
			cout << "second must not be equal 0" << endl;
		}
		return(res);
	}
};

*/

int main()
{
	task a;
	a.init(14, 7);
	a.read();
	a.show();
	cout << "\nfirst / second = "<< a.ipart() << endl;

	return 0;
}