//#include<iostream>
//#include <string>
//Problem # 1.
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::cin;
//
//	char input_c[2];
//	cin.getline(input_c, 2);
//
//	cout << static_cast<int>(input_c[0]) << endl;
//	return 0;
//}
//
////refer to http://hyeonstorage.tistory.com/306
////http://dodnet.tistory.com/488
////http://egloos.zum.com/cinawee/v/1283363


//Problem # 2.
//#include <iostream>
//#include <string>
//#include <array>
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::cin;
//	using std::array;
//	using std::string;
//
//	string input_string;
//	getline(cin, input_string);
//
//	const int num_of_alphabet = (int)'Z' - (int)'A' + 1;
//	array<int, num_of_alphabet> c_position = {0,};
//	std::fill(c_position.begin(), c_position.end(), -1);
//
//	int position = 0;
//	for (const auto& c : input_string) {
//		int i =  (int)c - (int)'a';
//		if (-1 == c_position[i]) {
//			c_position[i] = position;
//		}
//		position++;
//	}
//
//
//	for (const auto& position : c_position) {
//		cout << position << " ";
//	}
//	cout << endl;
//	return 0;
//}

//Problem # 3.
//#include<iostream>
//#include <string>
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//void inputClear();
//int main()
//{
//	int num_of_testcase = 0;
//	cin>> num_of_testcase;
//
//	inputClear();
//
//	for (int i = 0; i < num_of_testcase; i++) {
//		int num_of_repeat_count = 0;
//		cin >> num_of_repeat_count;
//		inputClear();
//
//		string input_string;
//		getline(cin, input_string);
//
//		for (auto s : input_string) {
//			for(int repeat = 0; repeat < num_of_repeat_count; repeat++)
//			cout << s;
//		}
//		cout << endl;
//
//	}
//	return 0;
//}
//void inputClear()
//{
//	cin.clear();
//	cin.ignore();
//}

//Problem # 4.
//#include <algorithm>
//#include <string> 
//#include <array>
//#include <iostream>
//#include <utility> 
//#include <map>
//
//using std::pair;
//using std::make_pair;
//typedef pair<char, int> c_pair;
//char easytoCapital(char in);
//bool comp(const c_pair& a, const c_pair& b);
//
//int main()
//{
//	using std::string;
//	using std::cout;
//	using std::endl;
//	using std::cin;
//	using std::array;
//
//	std::string data = "";
//	getline(cin, data);
//	const int num_of_alphabat = 26;
//
//	//std::transform(data.begin(), data.end(), data.begin(), ::tolower);
//	std::transform(data.begin(), data.end(), data.begin(), easytoCapital);
//
//	//the reason to use array.
//	//http://wonderfuldream.tistory.com/329 [In search of wonder]
//
//	
//	//출처: http://sarah950716.tistory.com/4 [알고리즘 정복기]
//	//pair<int, int> p = make_pair(1, 2);
//
//	array<c_pair, num_of_alphabat> c_array = { make_pair(0, 0) };
//
//	for (auto c : data) {
//		int i = (int)c - (int)'A';
//		c_array[i].first = (char)c;
//		c_array[i].second++;	
//	}
//
//	sort(c_array.begin(), c_array.end(), comp);
//
//	if (c_array[0].second == c_array[1].second) {
//		cout << "?" << endl;
//	}
//	else {
//		cout << c_array[0].first << endl;
//		
//	}
//
//}
//char easytoCapital(char in)
//{
//	if (in <= 'z' && in >= 'a')
//		return in - ('z' - 'Z');
//	return in;
//}
//bool comp(const c_pair& a, const c_pair& b)
//{
//	return std::get<1>(a) > std::get<1>(b); 
//}

//Problem # 5.
#include <iostream>
#include <string>
#include <array>

enum class GROUP_CHECKER
{
	NONE,
	START,
	END,
	NOT,
};
int main()
{
	using std::string;
	using std::cout;
	using std::endl;
	using std::cin;
	using std::array;

	int input_int = 0;
	cin >> input_int;

	string input;
	getline(cin, input);

	const int num_of_alphabet = (int)'z' - (int)'a' + 1;

	array<GROUP_CHECKER, num_of_alphabet> group_cheker;
	std::fill(group_cheker.begin(), group_cheker.end(), GROUP_CHECKER::NONE);

	
	int index_pre_c = -1;
	for (const auto& c : input) {
		int i = (int)c - (int)'a';
		if (GROUP_CHECKER::NONE == group_cheker[i]) {
			group_cheker[i] = GROUP_CHECKER::START;

			if ( -1 != index_pre_c && GROUP_CHECKER::START == group_cheker[index_pre_c]) {
				group_cheker[index_pre_c] = GROUP_CHECKER::END;
			}	
		}
		else if(GROUP_CHECKER::END == group_cheker[i]){
			group_cheker[i] = GROUP_CHECKER::NOT;
		}
		index_pre_c = i;
	}

	group_cheker[index_pre_c] = GROUP_CHECKER::END;

	int ret = 0;
	for (const GROUP_CHECKER& a : group_cheker) {
		if (GROUP_CHECKER::END == a) {
			ret++;
		}
	}
	cout << ret <<endl;


	return 0;
}

//Problem # 7.
//#include <iostream>
//#include <string>
//#include <array>
//
//int reverse3(int n);
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::cin;
//	using std::array;
//
//	array<int, 2> num_array = { 0, };
//
//	for (auto& i : num_array) {
//		cin >> i;
//	}
//
//	for (auto& i : num_array) {
//		i = reverse3(i);
//	}
//
//	int result = (num_array[0] > num_array[1]) ? num_array[0] : num_array[1];
//	cout << result << endl;
//}
//
//int reverse3(int n)
//{
//	int multiply = 100;
//	int ret = 0;
//	for (int i = 0; i < 3; i++) {
//		int mod  = n % 10;
//		mod *= multiply;
//		ret += mod;
//		multiply /= 10;
//		n /= 10;
//	}
//	return ret;
//}