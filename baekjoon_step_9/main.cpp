//Problem #1
#include <iostream>
#include <vector>
using std::vector;
void bubble_sort(vector<int>& nums);
void select_sort(vector<int>& nums);
void insert_sort(vector<int>& nums);
int main()
{
	using std::cout;
	using std::endl;
	using std::cin;

	int input_num;
	cin >> input_num;

	vector<int> nums;

	for (int i = 0; i < input_num; i++) {
		int input;
		cin >> input;
		nums.push_back(input);
	}

	//bubble_sort(nums);
	//select_sort(nums);
	insert_sort(nums);

	for (auto num : nums) {
		cout << num << endl;
	}
	return 0;
}
void bubble_sort(vector<int>& nums)
{
	for (unsigned int i = 0; i < nums.size(); i++) {
		for (unsigned int i2 = 0; i2 < nums.size() - 1 - i; i2++) {
			if (nums[i2] > nums[i2 + 1]) {
				int temp = nums[i2];
				nums[i2] = nums[i2 + 1];
				nums[i2 + 1] = temp;
			}
		}
	}
}
void select_sort(vector<int>& nums)
{
	for (unsigned int i = 0; i < nums.size() - 1; i++) {
		for (unsigned int i2 = i + 1 ; i2 < nums.size(); i2++) {
			if (nums[i] > nums[i2]) {
				int temp = nums[i2];
				nums[i2] = nums[i];
				nums[i2] = temp;
			}
		}
	}
}
void insert_sort(vector<int>& nums)
{
	for (unsigned int i = 0; i < nums.size() - 1; i++) {
		for (unsigned int i2 = i + 1; i2 > 0; i2--) {
			if (nums[i2-1] > nums[i2]) {
				int temp = nums[i2];
				nums[i2] = nums[i2-1];
				nums[i2-1] = temp;
			}
		}
	}
}

//Problem #4
//#include <iostream>
//#include <vector>
//#include <map>
//#include <cmath>
//using std::vector;
//using std::pair;
//int A(const vector<int>& v_numbers);
//int B(const vector<int>& v_numbers);
//int C(const vector<int>& v_numbers);
//int D(const vector<int>& v_numbers);
//void sortVector(vector<int>& v_numbers);
//void sortVectorPair(vector<pair<int, int>>& vp_numbers);
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//	int num_input;
//
//	cin >> num_input;
//
//	vector<int> v_numbers(num_input);
//
//	for (int& num : v_numbers) {
//		cin >> num;
//	}
//
//	cout << A(v_numbers) << endl;
//	cout << B(v_numbers) << endl;
//	cout << C(v_numbers) << endl;
//	cout << D(v_numbers) << endl;
//
//	return 0;
//}
//int A(const vector<int>& v_numbers)
//{
//	float sum = 0;
//	for (int num : v_numbers) {
//		sum += num;
//	}
//
//	float ret = sum / v_numbers.size();
//	return (int)round(ret); // c99
//}
//int B(const vector<int>& v_numbers)
//{
//	vector<int> v_numbers_new = v_numbers;
//	sortVector(v_numbers_new);
//	return v_numbers_new[(int)(v_numbers_new.size() / 2)];
//}
//int C(const vector<int>& v_numbers)
//{
//	//vector<pair<int, int>> vp_numbers(v_numbers.size());
//	vector<pair<int,int>> vp_numbers;
//	for (auto num : v_numbers) {
//		bool isExist = false;
//		for (auto& p : vp_numbers) {
//			if (p.first == num) {
//				p.second += 1;
//				isExist = true;
//				break;
//			}
//		}
//		if (!isExist) {
//			vp_numbers.push_back({ num ,1 });
//		}
//	}
//	sortVectorPair(vp_numbers);
//
//	if (vp_numbers.size() == 1) {
//		return vp_numbers[0].first;
//	}
//
//	if (vp_numbers[0].first == vp_numbers[1].first) {
//		vector<int> v_minimum;
//		for (auto vp_num : vp_numbers) {
//			if (vp_num.first != vp_numbers[0].first) {
//				break;
//			}
//			v_minimum.push_back(vp_num.first);
//		}
//		sortVector(v_minimum);
//		return v_minimum[1];
//	}
//	else {
//		return vp_numbers[0].first;
//	}
//}
//int D(const vector<int>& v_numbers)
//{
//	vector<int> v_numbers_new = v_numbers;
//	sortVector(v_numbers_new);
//	return v_numbers_new[v_numbers_new.size() - 1] - v_numbers_new[0];
//}
//void sortVector(vector<int>& v_numbers)
//{
//	for (unsigned int i = 0; i < v_numbers.size() - 1; i++) {
//		for (unsigned int i2 = i + 1; i2 < v_numbers.size(); i2++) {
//			if (v_numbers[i] > v_numbers[i2]) {
//				int temp = v_numbers[i];
//				v_numbers[i] = v_numbers[i2];
//				v_numbers[i2] = temp;
//			}
//		}
//	}
//}
//void sortVectorPair(vector<pair<int,int>>& vp_numbers)
//{
//	for (unsigned int i = 0; i < vp_numbers.size() - 1; i++) {
//		for (unsigned int i2 = i + 1; i2 < vp_numbers.size(); i2++) {
//			if (vp_numbers[i].second < vp_numbers[i2].second) {
//				pair<int, int> temp = vp_numbers[i];
//				vp_numbers[i] = vp_numbers[i2];
//				vp_numbers[i2] = temp;
//			}
//		}
//	}
//}

//Problem #5
//#include <iostream>
//#include <vector>
//#include <list>
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::cin;
//	using std::vector;
//	using std::list;
//
//	int input;
//	cin >> input;
//	
//	vector<int> v_num;
//
//	
//	int i = 0;
//	while (true) {
//		v_num.push_back(input % 10);
//		input /= 10;
//		i++;
//		if (0 == input) {
//			break;
//		}
//	}
//
//	v_num.size();
//
//	for (unsigned int i = 0; i < v_num.size() - 1; i++) {
//		for (unsigned int i2 = 0; i2 < v_num.size() -  i - 1; i2++) {
//			if (v_num[i2] < v_num[i2 + 1]) {
//				int temp = v_num[i2 + 1];
//				v_num[i2 + 1] = v_num[i2];
//				v_num[i2] = temp;
//			}
//		}
//	}
//
//	for (auto num : v_num) {
//		cout << num;
//	}
//	cout << endl;
//
//	return 0;
//}

//Problem #6
//#include <iostream>
//#include <vector>
//#include <string>
//using std::string;
//void swap(string& s1, string& s2);
//int main()
//{
//	using std::cin;
//	using std::cout;
//	using std::endl;
//	using std::vector;
//
//	int input_num;
//	cin >> input_num;
//	cin.ignore();
//	cin.clear();
//	
//	vector<string> v_str;
//	for (int i = 0; i < input_num; i++) {
//		string i_string;
//		getline(cin, i_string);
//		v_str.push_back(i_string);
//	}
//
//	for (int i = 0; i < input_num; i++) {
//		for (int i2 = 0; i2 < input_num - i - 1; i2++){
//			if (v_str[i2].size() > v_str[i2 + 1].size()) {
//				swap(v_str[i2], v_str[i2 + 1]);
//			}
//			else if(v_str[i2].size() == v_str[i2 + 1].size()){
//				if (v_str[i2] > v_str[i2 + 1]) {
//					swap(v_str[i2], v_str[i2 + 1]);
//				}
//			}
//		}
//	}
//	cout << endl;
//	string pre;
//	for (auto s : v_str) {
//		if(pre != s)
//			cout << s << endl;
//		pre = s;
//	}
//	return 0;
//}
//void swap(string& s1, string& s2)
//{
//	string temp = s1;
//	s1 = s2;
//	s2 = temp;
//}