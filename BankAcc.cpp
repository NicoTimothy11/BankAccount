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
private:
	string AccName;
	string AccNum;
	int balance;
public:
	Savings(string AccName, string AccNum, int balance) {
		this->AccName = AccName;
		this->AccNum = AccNum;
		this->balance = balance;
	}

	void VirtualFunc() override {
		cout << "Withdraw: " << balance << endl;
	}
	void ShowInfo() override {
		cout << "Savings Account Name: " << AccName << endl;
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
	Savings Nico("Nico Babaylan", "12345", 2000);

	Savings* SavePtr = &Nico;
	SavePtr -> VirtualFunc();
	SavePtr -> ShowInfo();
	return 0;
}

