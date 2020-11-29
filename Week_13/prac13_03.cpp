/* (�ǽ�3)
bubble sort������� ������ �����ϴ� ���α׷�
bubble sort�� ���ڷ� �ԷµǴ� Compare comp�� ���� *Functor�� ����
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

// Functor�� compLess�� ����
struct compLess { // �������� ����
	bool operator() (int x, int y)  {
		return x < y;
	}
};

// Functor�� compGreater�� ����
struct compGreater { // �������� ����
	bool operator() (int x, int y)  {
		return x > y;
	}
};

int main() {

	forward_list<int> values{ 7, 0, 6, 1, 5, 2, 4, 3 };

	cout << "�������� ����" << endl;
	compLess compLess; // Functor ����
	bubble_sort(values.begin(), values.end(), compLess);

	// �������� ���� ��� ���
	for (auto it = values.begin(); it != values.end(); ++it) {
		cout << ' ' << *it;
	}
	cout << endl;

	cout << "�������� ����" << endl;
	compGreater compGreater; // Functor ����
	bubble_sort(values.begin(), values.end(), compGreater);

	// �������� ���� ��� ���
	for (auto it = values.begin(); it != values.end(); ++it) {
		cout << ' ' << *it;
	}
	cout << endl;

}