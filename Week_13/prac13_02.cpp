//(실습2) Variadic template 활용
#include <iostream>
#include <string>

using namespace std;

// 마지막에 남는 11.1f를 처리할, 하나의 파라미터만 받는 템플릿 추가하였음
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