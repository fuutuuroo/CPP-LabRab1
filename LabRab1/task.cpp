#include <iostream> 
using namespace std;
#include "task.h"

void task::init(int f, int s)
{
	first = f;
	second = s;
}
void task::read()
{
	cout << "insert first ";
	cin >> first;
	cout << "insert second ";
	cin >> second;
	cout << endl;
}
void task::show()
{
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}
int task::ipart()
{
	int res;
	if (second != 0) {
		res = first / second;
	}
	else {
		cout << "\nsecond must not be equal 0" << endl;
	}
	return(res);
}