/* (실습3)
bubble sort방식으로 정수를 정렬하는 프로그램
bubble sort의 인자로 입력되는 Compare comp를 위한 *Functor를 구현
*/

#include <iostream>
#include <algorithm>
#include <forward_list>
#include <functional>

using namespace std;

template <typename ForwardIterator, typename Compare>
void bubble_sort(ForwardIterator first, ForwardIterator last, Compare comp) {
	for (auto sorted = first; first != last; last = sorted) {
		sorted = first;
		for (auto cur = first, prev = first; ++cur != last; ++prev) {
			if (comp(*cur, *prev)) {
				iter_swap(cur, prev);
				sorted = cur;
			}
		}
	}
}

// Functor인 compLess를 구현
struct compLess { // 오름차순 정렬
	bool operator() (int x, int y)  {
		return x < y;
	}
};

// Functor인 compGreater를 구현
struct compGreater { // 내림차순 정렬
	bool operator() (int x, int y)  {
		return x > y;
	}
};

int main() {

	forward_list<int> values{ 7, 0, 6, 1, 5, 2, 4, 3 };

	cout << "오름차순 정렬" << endl;
	compLess compLess; // Functor 생성
	bubble_sort(values.begin(), values.end(), compLess);

	// 오름차순 정렬 결과 출력
	for (auto it = values.begin(); it != values.end(); ++it) {
		cout << ' ' << *it;
	}
	cout << endl;

	cout << "내림차순 정렬" << endl;
	compGreater compGreater; // Functor 생성
	bubble_sort(values.begin(), values.end(), compGreater);

	// 내림차순 정렬 결과 출력
	for (auto it = values.begin(); it != values.end(); ++it) {
		cout << ' ' << *it;
	}
	cout << endl;

}