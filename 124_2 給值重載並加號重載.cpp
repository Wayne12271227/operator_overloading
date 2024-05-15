#include<iostream>
using namespace std;

class Person
{
public:
	int* age_;

	Person(int age)
	{
		age_ = new int(age);
	}
	Person(const Person& p)
	{
	age_ = new int(*p.age_);
	}
	~Person()
	{
		if (age_ != NULL)
		{
			delete[] age_;
			age_ = NULL;
		}
	}

	friend ostream& operator<<(ostream& os, const Person& p) {
		os << *p.age_;
		return os;
	}

	Person& operator=(const Person& p)
	{
		if (age_ != NULL)
		{
			delete age_;
			age_ = NULL;
		}
		age_ = new int(*p.age_);
		return *this;
	}
	Person& operator+(const Person& p)
	{
		*(this->age_) += *p.age_;
		return *this;
	}

};


void test01()
{
	Person p1(18);
	Person p2(100);
	cout << p1 << endl;
	cout << p2 << endl;

	Person p3 = p1 + p2;
	cout << p3 << endl;
}



int main()
{
	test01();
	return 0;
}
