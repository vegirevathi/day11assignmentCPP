#include <iostream>
using namespace std;

class Sum {
	public:
	int add (int a, int b) {
		return a + b;
	}
	virtual void display() = 0;
};

class DerivedSum : virtual public Sum {
	public:
	int add (int a, int b) {
		return a * b;
	}
	void display() {
		cout << "This is derived from abstract class " << endl;
	}
};


int main() {
	int x ,y;
	Sum *s;
	DerivedSum ds;
	s = &ds;
	x = s -> add(10, 10);
	y = ds.add(10, 10);
	cout << "sum of 10 and 10 in parent class " << x << " Sum of 10 and 10 in derived class " << y << endl;

	ds.display();

	return 0;
}
