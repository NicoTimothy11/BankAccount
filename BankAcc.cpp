#include <iostream>

using namespace std;

class Account {
public:
	virtual void VirtualFunc() = 0;

	virtual void ShowInfo() {
		cout << "This account is private" << endl;
	}
};

class Savings : public Account {
public:
	void VirtualFunc() override {
		cout << "Withdraw" << endl;
	}
	void ShowInfo() override {
		cout << "Savings Account Name: " << endl;
	}
};

class Checkings : public Account {
public:
	void VirtualFunc() override {
		cout << "Chequess" << endl;
	}
	void ShowInfo() override {
		cout << "Checkings Account Name: " << endl;
	}
};

int main() {
	Savings Nico;

	Savings* SavePtr = &Nico;
	SavePtr -> VirtualFunc();
	SavePtr -> ShowInfo();
	return 0;
}

