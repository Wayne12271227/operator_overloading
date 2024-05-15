//125 ���Y�B��l����.cpp ==
#include<iostream>
using namespace std;

class Person {
public:
	string name_;
	int age_;

	Person(string name , int age) 
	{
		age_ = age;
		name_ = name;
	}

	bool operator==(Person &p)
	{
		if (this->age_ == p.age_ && this->name_ == p.name_) return true;
		return false;
	}

	bool operator!=(Person &p)
	{
		if (this->age_ == p.age_ && this->name_ == p.name_) return false;
		return true;
	}
};

//==
void test01()
{
	Person p1("TOM", 18);
	Person p2("TOM", 18);

	if (p1 == p2)
	{
		cout << "p1����p2" << endl;
	}
	else
	{
		cout << "p1�S������p2" << endl;
	}
}

//!=
void test02()
{
	Person p1("TOM", 18);
	Person p2("TOM", 18);

	if (p1 != p2)
	{
		cout << "p1������p2" << endl;
	}
	else
	{
		cout << "p1�S��������p2" << endl;
	}

}

int main()
{
	test02();
	return 0;	
}