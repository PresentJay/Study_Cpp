#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " �� ��" << endl; }
	//Circle &operator ++ () { radius++; return *this; }
	//Circle &operator ++ (int x) { Circle temp = *this; radius++; return temp; }

	friend Circle &operator ++ (Circle &op1) { op1.radius++; return op1; }
	friend Circle &operator ++ (Circle &op1, int x) { Circle temp = op1; op1.radius++; return temp; }
};

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}