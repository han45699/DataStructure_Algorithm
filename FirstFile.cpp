#include <iostream>
#include <vector>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
	void SetCordinate(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print()
	{
		cout << "x : " << x << endl << "y : " << y << endl;
	}
};

void foo(auto lambda_func1)
{
	lambda_func1();
}

int main()
{
	Point p1(1, 2);
	
	foo([&]() { p1.Print(); p1.SetCordinate(55, 99); });
	
	p1.Print();
}