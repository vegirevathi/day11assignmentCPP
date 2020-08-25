#include <iostream>
using namespace std;

class Modifiers {
	private:
	int ex = 15, sample = 25;
	public:
	int global = 20;

	public:
		int add(int a, int b) {
			return a + b;
		}

	private:
		int product(int c, int d) {
			return c * d;
		}

	friend class Another;
	friend void method(Modifiers m);
};

void method(Modifiers m) {
		cout << "ex is " << m.ex << " sample is " << m.sample << endl;
	}

class Another {
	public :
	int multiply(Modifiers m) {
		return m.product(10, 20);
	}
};

int main() {
	int x, y;
	Modifiers m;
	cout << "global variable " << m.global << endl;
	Another a;
	x = m.add(10, 20);
	y = a.multiply(m);
	cout << "public method add result is " << x << endl;
	cout << "private method product result is " << y << endl;

	method(m);
	return 0;
}
