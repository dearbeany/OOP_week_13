// (실습1.1) default parameter 용법 익히기
#include <iostream>

using namespace std;

// 템플릿에 디폴트 인자를 지정함
template <typename T, int num = 5> 

T add_num(T t) {
	return t + num;
}

int main() {
	int x = 3;
	cout << "x : " << add_num<int, 2>(x) << endl;

}