// (�ǽ�1) default parameter ��� ������

#include <iostream>

using namespace std;

template <typename T, int num = 5>
T add_num(T t) {
	return t + num;
}
int main() {
	int x = 3;
	cout << "x : " << add_num(x) << endl;
}
