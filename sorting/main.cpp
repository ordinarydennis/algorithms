#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::array;

void mergeSort(vector<int>& input_list);

int main()
{
	vector<int> input_list;
	int input = 0;
	int input_count = 0;
	while (input_count < 5 && cin >> input) {
		input_list.push_back(input);
		input_count++;
	}
	
	for (auto input : input_list) {
		cout << input;
	}

	cout << endl;

	return 0;
}


//1839 4026
void mergeSort(vector<int>& input_list)
{
	//ºĞÇÒ
	int mid = input_list.size() / 2;
	int last_index = input_list.size() - 1;
	
	division(input_list, 0, mid - 1);
	division(input_list, mid, last_index);



}
void division(vector<int>& input_list, int ileft, int iright)
{
	int left = ileft;  
	int mid = ileft + (iright - ileft) / 2; 
	int right = iright;  

	if (left == mid) {
		return ;
	}

	division(input_list, left, mid);
	division(input_list, mid + 1, right);

	sort(input_list, left, mid);
	sort(input_list, mid + 1, right);
}
void merge(vector<int>& input_list, int first, int last)
{
	//input_list
	vector<int> arr;
	
	int mid = first + (last - first) / 2 + 1;
	for (int i = first; i < mid; i++) {
		if (input_list[first + i] > input_list[mid + i]) {
			arr.push_back(input_list[mid + i]);
		}
		else {

		}
	}


}
void sort(vector<int>& input_list, int first, int last)
{
	for (int i = first; i < last; i++) {
		if (input_list[i] > input_list[++i]) {
			int temp = input_list[i];
			input_list[i] = input_list[++i];
			input_list[++i] = temp;
		}
	}
}