#include <iostream>
using namespace std;

class Addition {
	int a, b, c;
public:
	int sum(int a, int b) {
		return a + b;
	}
	int sum(int a, int b, int c) {
		return a + b + c;
	}
};


int main() {
	Addition a;
	int s1, s2;
	s1 = a.sum (10, 20);
	s2 = a.sum (10, 20, 30);
	cout << "sum of two parameters is " << s1 << endl;
	cout << "sum of three paramters is " << s2 << endl;

	return 0;
}
