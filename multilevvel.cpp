#include <bits/stdc++.h> //multilevel..
using namespace std;
class A {
public:
	int a;
	void get_A_data()
	{
		cout << "Enter value of a: ";
		cin >> a;
	}
};
class B : public A {// derived class from base class
public:
	int b;
	void get_B_data()
	{
		cout << "Enter value of b: ";
		cin >> b;
	}
};
class C : public B {// derived from class derive1
private:
	int c;
public:
	void get_C_data()
	{
		cout << "Enter value of c: ";
		cin >> c;
	}
	void sum()	// function to print sum
	{
		int ans = a + b + c;
		cout << "sum: " << ans;
	}
};
int main()
{	// object of sub class
	C obj;
	obj.get_A_data();
	obj.get_B_data();
	obj.get_C_data();
	obj.sum();
}

