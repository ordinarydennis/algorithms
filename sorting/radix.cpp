#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::array;

using INT_ARR = array<int, 10>;
using INT_QUEUE = array<INT_ARR, 10>;
void radixSort(INT_ARR& int_arr);
int main()
{
	//when the eleemts is minus?
	INT_ARR int_arr = { 6, 66, 7, 1, 42, 88, 18, 2, 5, 230 };
	for (auto i : int_arr) {
		cout << i << " ";
	}
	cout << endl;
	radixSort(int_arr);
	for (auto i : int_arr) {
		cout << i << " ";
	}
	cout << endl;
}

void radixSort(INT_ARR& int_arr)
{
	int div = 1;
	int count = 0;
	INT_ARR pre_int_arr;
	do {
		pre_int_arr = int_arr;
		INT_QUEUE int_queue = { 0, };
		INT_ARR radix_arr = { 0, };
		if (count > 0) {
			div *= 10;
		}
		for (auto n : int_arr) {
			int index = (n / div) % 10;
			int_queue[radix_arr[index]][index] = n;
			radix_arr[index]++;
		}

		int k = 0;
		for (int i2 = 0; i2 < 10; i2++) {
			for (int i = 0; i < 10; i++) {
				if (int_queue[i][i2] > 0) {
					int_arr[k++] = int_queue[i][i2];
				}
			}
		}
		count++;
	} while (pre_int_arr != int_arr);
}