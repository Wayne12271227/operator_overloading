//126 函數調用重載 重載小括號() 
//由於重載後使用的方式非常像函數調用，因此稱作仿函數
//仿函數非常靈活，無固定寫法

#include<iostream>
#include<string>
using namespace std;

class myPrint {
public:
	
	//重載()
	void operator()(string test)
	{
		cout << test << endl;
	}

	void operator()(string test, int num)
	{
		cout << test << "今天吃" << num << "次飯" << endl;
	}
};

class myAdd {
public:
	
	int operator()(int num1 , int num2)
	{
		return num1 + num2;
	}
};


void test01()
{
	myPrint mp;
	mp("hello world");
	mp("chiikawa", 99);
}

void test02()
{
	myAdd ma;
	int ans = ma(500, 150);
	cout << "ans = " << ans << endl;

	//匿名「函數物件」，執行完了 立刻被釋放 ，下面物件沒有名字
	//類型+小括號 就是匿名物件 後面的小括號就是在使用重載後的運算子
	cout << myAdd()(100, 100) << endl;
}
int main()
{
	test02();
	return 0;
}


//依照需求寫下各種仿函數，非常靈活