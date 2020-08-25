#include <iostream>
using namespace std;

class GrandFather {
	int x;
	public:
	void gf () {
		cout << "I am a grandfather" << endl;
	}
};


class Father1 : virtual public GrandFather {
	public:
	void f1 () {
		cout << "this is father1 " << endl;
	}
};

class Father2 : virtual public GrandFather {
	public:
	void f2 () {
		cout << "This is father2 " << endl;
	}
};

class Son : virtual public Father1, public Father2 {
	public:
	void s () {
		cout << "This is son" << endl;
	}
};


int main() {
	Son son;
	son.s();
	son.f2();
	son.f1();
	son.gf();

	cout << "Now f1 and f2" << endl;
	Father1 father1;
	Father2 father2;
	father2.gf();
	father1.gf();

	return 0;
}
