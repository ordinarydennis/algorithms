#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

const int ARRAY_MAX_SIZE = 1000;
const int ARRAY_SIZE = 10;
using INT_ARR = array<int, ARRAY_SIZE>;


void countingSort(INT_ARR& int_arr);
int main()
{
	INT_ARR int_arr = { 6, 66, 7, 1, 42, 88, 18, 2, 5, 23 };
	countingSort(int_arr);
	cout << endl;
}

void countingSort(INT_ARR& int_arr)
{
	array<int, ARRAY_MAX_SIZE> count_arr = { 0, };

	int sum = 0;
	for (int n : int_arr) {
		count_arr[n]++;
	}

	for (int i = 0; i < count_arr.size(); i++) {
		if (count_arr[i] > 0) {
			cout << i << " ";
		}
	}
}