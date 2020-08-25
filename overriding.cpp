#include <iostream>
using namespace std;

class Sum {
	public:
	int add (int a, int b) {
		return a + b;
	}
};

class DerivedSum : virtual public Sum {
	public:
	int add (int a, int b) {
		return a * b;
	}
};


int main() {
	int x ,y;
	Sum s;
	DerivedSum ds;
	x = s.add(10, 10);
	y = ds.add(10, 10);
	cout << "sum of 10 and 10 in parent class " << x << " Sum of 10 and 10 in derived class " << y;

	return 0;
}
