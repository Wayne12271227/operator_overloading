//122 ��X����
#include<iostream>
using namespace std;

class Person {
private:
	int A_;
	int B_;
	 
public:
	friend ostream& operator<<(ostream& os, Person& p)
	{
		os << "A_�G" << p.A_ << "B_�G" << p.B_;
		return os;
	}

	Person(int a, int b) {
		A_ = a;
		B_ = b;
	}
};
//�u��Q�Υ�����ƭ�����X�B��l

void test01()
{
	Person p1(10, 20);

	//cout << p1.A_ << endl;
	//cout << p1.B_  << endl;

	cout << p1 << "HELLO" << endl;
}



int main()
{

	test01();

	return 0;
}