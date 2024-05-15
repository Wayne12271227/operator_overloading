//121 加號重載.cpp

#include <iostream>
using namespace std; 


class Person {

public:
	int A_;
	int B_;

	//方法1、調用成員函數
	Person pAddp(Person &p ) {
		Person temp;
		temp.A_ =this->A_+ p.A_;
		temp.B_ = this->B_ + p.B_;
		return temp; 
		
	}
	
	//方法2、成員函數重載
	Person operator+(Person& p)
	{
		Person temp; 
		temp.A_ = this->A_ +p.A_;
		temp.B_ = this->B_ + p.B_;
		return temp;
	}
};

//方法3、全局函數重載
//Person operator+(Person p1, Person p2)
//{
//	Person temp;
//	temp.A_ = p1.A_ + p2.A_;
//	temp.B_ = p1.B_ + p2.B_;
//	return temp;
//}


//函數operator overloading 
Person operator+(Person p, int num) //Person + int 
{
	Person temp;
	temp.A_ =p.A_ + num;
	temp.B_ =p.B_ + num;
	return temp;
}

void testCase01()
{
	Person p1;
	p1.A_ = 10;
	p1.B_ = 20;


	Person p2;
	p2.A_ = 100;
	p2.B_ = 200;
	

	
	Person p3 = p1 + p2;

	cout << p3.A_ << endl;
	cout << p3.B_ << endl;

	Person p4 = p1 + 15;
	cout << p4.A_ << endl;
	cout << p4.B_ << endl;


	//成員函數的本質調用
	/*Person p3 = p1.operator+(p2);*/

	//全局函數的本質調用
	/*Person p3 = operator+(p1, p2);*/

	//運算子重載也可以應用在函數重載
	//EX:
	//Person p3 = 10 + p1; //Person + int
	//  


}






int main()
{
	testCase01();
	return 0;
}








//總結 不要濫用operator overloading & 內置數據類型 不可以發生重載 
