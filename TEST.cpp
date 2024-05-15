#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	int A_;
	int B_;
	
	Person(int n1, int n2)
	{
		this->A_ = n1;
		this->B_ = n2;
	}

	friend ostream& operator<<(ostream& os, const Person& p)
	{
		os << "A_:" << p.A_ << " " << "B_:" << p.B_;
		return os;
	}

	Person& operator+(const Person& p)
	{
		this->A_ += p.A_;
		this->B_ += p.B_;
		return *this;
	}
	
};


void test01()
{
	Person p1(10, 20);
	Person p2(100, 200);
	cout << p1 << endl;
	cout << p2 << endl;
	p1 = p1 + p2;
	cout << p1 << endl;
	cout << p2 << endl;
}

int main() {

	test01();
	return 0;
}