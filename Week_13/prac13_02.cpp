//(�ǽ�2) Variadic template Ȱ��
#include <iostream>
#include <string>

using namespace std;

// �������� ���� 11.1f�� ó����, �ϳ��� �Ķ���͸� �޴� ���ø� �߰��Ͽ���
template<typename T>
auto sum(T x) {
	return x;
}

template<typename T, typename...Args>
auto sum(T x, Args... args) {
	return x + sum(args...);
}
int main() {
	auto x = sum(42.5, 10, 11.1f);
	cout << x;

}