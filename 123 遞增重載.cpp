//123���W����
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

	//������� ��++  ��^�ޥ�(&) �O���F�@����@�ӼƦr�i��ާ@
	myInterger &operator++()
	{

		//��++
		Num_++;
		//�A�N�ۨ���^
		return *this;
	}

	//��++ int �N��e��ѼơA�Ω�Ϥ���++ ��++  
	myInterger operator++(int)
	{
		//�� �O����ɵ��G
		myInterger temp = *this;
		//�� ++
		Num_++;
		//�̫� ��^�������G
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