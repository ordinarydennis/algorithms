//problem #1
//#include <iostream>
//#include <array>
//using std::cin;
//using std::cout;
//using std::endl;
//using std::array;
//int getFibonacci(int n);
//
//static const int MAX_ARR = 50;
////memoization
////uniform initialization
//array<int, MAX_ARR> memo {0,1};
//int main()
//{
//	int input = 0;
//	cin >> input;
//
//	cout <<getFibonacci(input)<<endl;
//	return 0;
//}
//int getFibonacci(int n)
//{
//	int ret = 0;
//	if (1 >= n) {
//		ret = memo.at(n);
//	}
//	else if (0 != memo.at(n)) {
//		ret = memo.at(n);
//	}
//	else {
//		ret = memo.at(n) = getFibonacci(n - 1) + getFibonacci(n - 2);
//	}
//	return ret;
//}


//problem #2
//#include <iostream>
//#include <array>
//using std::cin;
//using std::cout;
//using std::endl;
//using std::array;
//using int64 = long long;
//
//int64 getFibonacci(int n);
//static const int MAX_ARR = 100;
////memoization
////uniform initialization
//array<int64, MAX_ARR> memo{ 0,1 };
//int main()
//{
//	int input = 0;
//	cin >> input;
//
//	cout << getFibonacci(input) << endl;
//	return 0;
//}
//int64 getFibonacci(int n)
//{
//	int64 ret = 0;
//	if (1 >= n) {
//		ret = memo.at(n);
//	}
//	else if (0 != memo.at(n)) {
//		ret = memo.at(n);
//	}
//	else {
//		ret = memo.at(n) = getFibonacci(n - 1) + getFibonacci(n - 2);
//	}
//	return ret;
//}

//problem #4
#include <iostream>
#include <array>
using std::cin;
using std::cout;
using std::endl;
using std::array;
int getFibonacci(int n);

static const int MAX_ARR = 50;
//memoization
//uniform initialization
array<int, MAX_ARR> memo {0,1};
int one = 0;
int zero = 0;
int main()
{
	int test_count = 0;
	cin >> test_count;
	for (int i = 0; i < test_count; i++) {
		int input = 0;
		cin >> input;
		if (0 == input) {
			printf("%d %d\n", 1, 0);
		}
		else if (1 == input) {
			printf("%d %d\n", 0, 1);
		}
		else {
			getFibonacci(input);
			cout << memo[input - 1] << " " << memo[input] << endl;
		}
		//cout << zero << " " << one << endl;
		//zero = 0;
		//one = 0;
	}
	return 0;
}
int getFibonacci(int n)
{
	if (0 == n) {
		//::zero++;
		return 0;
	}
	else if (1 == n) {
		//::one++;
		return 1;
	}
	else if (0 != memo.at(n)) {
		return memo.at(n);
	}
	else {
		memo.at(n) = getFibonacci(n - 1) + getFibonacci(n - 2);
		return memo.at(n);
	}
}
//refer to https://hongku.tistory.com/164
