//problem #1
//#include <iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//int main()
//{
//	int input;
//	cin >> input;
//	if (0 == input) {
//		cout << 1 << " " << 0 << endl;
//	}
//
//
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//int fibonacci(int n) {
//	if (n == 0) {
//		printf("0");
//		return 0;
//	}
//	else if (n == 1) {
//		printf("1");
//		return 1;
//	}
//	else {
//		return fibonacci(n-1) + fibonacci(n-2);
//	}
//}


//problem #3
//#include <iostream>
//#include <algorithm>
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main()
//{
//	int size_triagle = 0;
//	cin >>size_triagle;
//
//	int sum_triagle[500][500] = {0,};
//
//	int** arr = new int*[size_triagle];
//	for (int i = 0; i < size_triagle; i++) {
//		arr[i] = new int[size_triagle];
//	}
//
//	for (int a = 0; a < size_triagle; a++) {
//		for (int b = 0; b <= a; b++) {
//			int value;
//			cin >> value;
//			arr[a][b] = value;
//			if (0 == a) {
//				sum_triagle[a][b] = arr[a][b];
//				continue;
//			}
//
//			int max = 0;
//			if (b > 0) {
//				max = (sum_triagle[a - 1][b-1] > sum_triagle[a - 1][b]) ? sum_triagle[a - 1][b - 1] : sum_triagle[a - 1][b];
//			}
//			else {
//				max = sum_triagle[a - 1][b];
//			}
//			sum_triagle[a][b] = arr[a][b] + max;
//		}
//	}
//
//	auto max = std::max_element(std::cbegin(sum_triagle[size_triagle - 1]), std::cend(sum_triagle[size_triagle - 1]));
//	cout << *max << endl;
//	for (int i = 0; i < size_triagle; i++) {
//		delete arr[i];
//	}
//	delete arr;
//}


//problem #3
//#include <iostream>
//#include <vector>
//using std::cout;
//using std::endl;
//using std::cin;
//using std::vector;
//
//int main()
//{
//	int step_count = 0;
//	cin >> step_count;
//	vector<int> vstep;
//	vstep.reserve(step_count);
//	vstep.push_back(0);
//	for (int i = 0; i < step_count; i++) {
//		int input = 0;
//		cin >> input;
//		vstep.push_back(input);
//	}
//
//	int curr_index = 0;
//	int end_index = vstep.size() - 1;
//	int continue_count = 0;
//
//	int sum = 0;
//	while (curr_index != end_index) {
//		if (curr_index == end_index - 2 && continue_count == 2) {
//			curr_index += 2;
//			sum += vstep[curr_index];
//			break;
//		}
//
//		if (vstep[curr_index + 1] > vstep[curr_index + 2]) {
//			if (continue_count < 2) {
//				continue_count++;
//				curr_index += 1;
//				sum += vstep[curr_index];
//			}
//		}
//		else {
//			continue_count = continue_count + 2;
//			curr_index += 2;
//			sum += vstep[curr_index];
//		}
//	}
//	cout << sum << endl;
//}