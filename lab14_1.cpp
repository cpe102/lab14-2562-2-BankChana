#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a = 5;
	char b = 'A';
	char &c = b;
	void *x = &a;
	void *y = &b;
	void *z = &x;
	cout << " a : " << a << endl;
	cout << " b : " << b << endl;
	cout << " c : " << c << endl;
	cout << " x : " << x << endl;
	cout << " y : " << y << endl;
	cout << " z : " << z << endl;
	cout << "&a : " << &a << endl;
	cout << "&b : " << &b << endl;
	cout << "&c : " << &c << endl;
	cout << "&x : " << &x << endl;
	cout << "&y : " << &y << endl;
	cout << "&z : " << &z << endl;

	b = 'F';
	cout << endl;
	cout << " a : " << a << endl;
	cout << " b : " << b << endl;
	cout << " c : " << c << endl;
	cout << " x : " << x << endl;
	cout << " y : " << y << endl;
	cout << " z : " << z << endl;

	b = 'W';
	cout << endl;
	cout << " a : " << a << endl;
	cout << " b : " << b << endl;
	cout << " c : " << c << endl;
	cout << " x : " << x << endl;
	cout << " y : " << y << endl;
	cout << " z : " << z << endl;

	a = 6;
	cout << endl;
	cout << " a : " << a << endl;
	cout << " b : " << b << endl;
	cout << " c : " << c << endl;
	cout << " z : " << x << endl;
	cout << " y : " << y << endl;
	cout << " z : " << z << endl;

	a = 7;
	cout << endl;
	cout << " a : " << a << endl;
	cout << " b : " << b << endl;
	cout << " c : " << c << endl;
	cout << " x : " << x << endl;
	cout << " y : " << y << endl;
	cout << " z : " << z << endl;
	return 0;
}
