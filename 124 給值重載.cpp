//124 給值重載.cpp
#include<iostream>
using namespace std;

//給值重載
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


	//重載 給值
	Person &operator=(Person &p )
	{
		////編譯器提供的是淺拷貝
		//age_ = p.age_;

		//應該先判斷是否有屬性在heap段，如果有先釋放乾淨，然後再深拷貝
		if (age_ != NULL)
		{
			delete age_;
			age_ = NULL;
		}

		age_ = new int(*p.age_); //深拷貝

		//返回物件本身
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
	cout << "p1的age：" << *p1.age_<< endl;

	Person p2(20);
	cout << "p2的age：" << *p2.age_ << endl;

	p2 = p1; //給值的操作 heap段重複釋放程式crash 
	//解決方案： 深拷貝 解決淺拷貝問題

	cout << "p1的age：" << *p1.age_ << endl;
	cout << "p2的age：" << *p2.age_ << endl;

	Person p3(30);

	p3 = p2 = p1;
	cout << p3;


}

int main()
{
	test01();

	return 0;
}