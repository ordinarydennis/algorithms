#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::array;


using INT_ARR = array<int, 10>;
void quickSort(INT_ARR& iarr, int start_index, int end_index);
int main()
{
	INT_ARR int_arr = { 6, 4, 7, 1, 42, 88, 18, 2, 5, 23 };
	quickSort(int_arr,0, int_arr.size() -1);

	for (auto i : int_arr) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
void swap(int& in1, int& in2)
{
	int temp = in1;
	in1 = in2;
	in2 = temp;
}
void quickSort(INT_ARR& iarr, int start, int end)
{
	if (start >= end) {
		return;
	}
	int& pivot = iarr[start];
	int start_index = start + 1;
	int end_index = end;
	while (start_index <= end_index){
		if (pivot > iarr[start_index]) {
			start_index++;
		}
		if (pivot < iarr[end_index]) {
			end_index--;
		}

		if (start_index > end_index) {
			swap(pivot, iarr[end_index]);
			quickSort(iarr, start, end_index - 1);
			quickSort(iarr, end_index + 1, end);
		}
		else {
			swap(iarr[start_index], iarr[end_index]);
		}
	}	
}