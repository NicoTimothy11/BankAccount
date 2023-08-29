#include <iostream>

using namespace std;

class Account {
public:
	virtual void VirtualFunc() = 0;
};

class Savings : public Account {
public:
	void VirtualFunc() override {
		cout << "Withdraw" << endl;
	}
};

class Checkings : public Account {
public:
	void VirtualFunc() override {
		cout << "Chequess" << endl;
	}
};

int main() {
	Savings Nico;

	Savings* SavePtr = &Nico;
	SavePtr -> VirtualFunc();
	return 0;
}

