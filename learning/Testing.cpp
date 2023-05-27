#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle r;

	r.setLength(3.1);
	r.setWidth(2.2);

	cout << r.getArea() << endl;

	cin.ignore();
	cin.get();

	return 0;
}