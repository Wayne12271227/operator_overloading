//126 ��ƽեέ��� �����p�A��() 
//�ѩ󭫸���ϥΪ��覡�D�`����ƽեΡA�]���٧@����
//���ƫD�`�F���A�L�T�w�g�k

#include<iostream>
#include<string>
using namespace std;

class myPrint {
public:
	
	//����()
	void operator()(string test)
	{
		cout << test << endl;
	}

	void operator()(string test, int num)
	{
		cout << test << "���ѦY" << num << "����" << endl;
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

	//�ΦW�u��ƪ���v�A���槹�F �ߨ�Q���� �A�U������S���W�r
	//����+�p�A�� �N�O�ΦW���� �᭱���p�A���N�O�b�ϥέ����᪺�B��l
	cout << myAdd()(100, 100) << endl;
}
int main()
{
	test02();
	return 0;
}


//�̷ӻݨD�g�U�U�إ��ơA�D�`�F��