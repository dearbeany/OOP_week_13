// (�ǽ�1.1) default parameter ��� ������
#include <iostream>

using namespace std;

// ���ø��� ����Ʈ ���ڸ� ������
template <typename T, int num = 5> 

T add_num(T t) {
	return t + num;
}

int main() {
	int x = 3;
	cout << "x : " << add_num<int, 2>(x) << endl;

}