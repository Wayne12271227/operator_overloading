//124 ���ȭ���.cpp
#include<iostream>
using namespace std;

//���ȭ���
class Person {
public:
	int* age_;

	Person(int age)
	{
		age_ = new int(age);
	}

	~Person()
	{
		if (age_ != NULL)
		{
			delete age_;
			age_ = NULL;	
		}
	}


	//���� ����
	Person &operator=(Person &p )
	{
		////�sĶ�����Ѫ��O�L����
		//age_ = p.age_;

		//���ӥ��P�_�O�_���ݩʦbheap�q�A�p�G�������񰮲b�A�M��A�`����
		if (age_ != NULL)
		{
			delete age_;
			age_ = NULL;
		}

		age_ = new int(*p.age_); //�`����

		//��^���󥻨�
		return *this;
	}
	friend ostream& operator<<(ostream& os, Person& p)
	{
		os << *p.age_;
		return os;
	}
};


void test01()
{
	Person p1(18);
	cout << "p1��age�G" << *p1.age_<< endl;

	Person p2(20);
	cout << "p2��age�G" << *p2.age_ << endl;

	p2 = p1; //���Ȫ��ާ@ heap�q��������{��crash 
	//�ѨM��סG �`���� �ѨM�L�������D

	cout << "p1��age�G" << *p1.age_ << endl;
	cout << "p2��age�G" << *p2.age_ << endl;

	Person p3(30);

	p3 = p2 = p1;
	cout << p3;


}

int main()
{
	test01();

	return 0;
}