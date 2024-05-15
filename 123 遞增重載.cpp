//123遞增重載
#include<iostream>
using namespace std;

class myInterger {
private:
	int Num_;

public:
	myInterger() { Num_ = 0; }

	friend ostream& operator<<(ostream& os, myInterger m)
	{
		os << m.Num_;
		return os;
	}

	//重載兩種 先++  返回引用(&) 是為了一直對一個數字進行操作
	myInterger &operator++()
	{

		//先++
		Num_++;
		//再將自身返回
		return *this;
	}

	//後++ int 代表占位參數，用於區分先++ 後++  
	myInterger operator++(int)
	{
		//先 記錄當時結果
		myInterger temp = *this;
		//後 ++
		Num_++;
		//最後 返回紀錄結果
		return temp;
	}
};

void test01()
{
	myInterger m1;
	/*cout << ++(++m1) << endl;
	cout << m1 << endl;*/

	myInterger m2;
	cout << m2 << endl;

	cout << m2++ << endl;
	cout << m2 << endl;
}
int main()
{


	test01();

}