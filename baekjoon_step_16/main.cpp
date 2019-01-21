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


//problem #2
//#include <iostream>
//#include <array>
//#include <vector>
//#include <memory>
//using std::cout;
//using std::endl;
//using std::cin;
//using std::vector;
//
//int main()
//{
//	int numHouse = 0;
//	cin >> numHouse;
//	int** data = new int* [numHouse];
//	for (int i = 0; i < numHouse; i++) {
//		data[i] = new int[3];
//	}
//	vector<vector<int>> data2(numHouse);
//	for(auto &e: data2){
//		int r = 0, g = 0, b = 0;
//		cin >> r >> g >> b;
//		e.push_back(r);
//		e.push_back(g);
//		e.push_back(b);
//	}
//
//	/*for (const auto &e2 : data2) {
//		for (const auto& e : e2) {
//			cout << e << " ";
//		}cout << endl;	
//	}*/
//
//	/*for (int i = 0; i < numHouse; i++) {
//		int r = 0, g = 0, b = 0;
//		cin >> r >> g >> b;
//		data[i][0] = r;
//		data[i][1] = g;
//		data[i][2] = b;
//	}*/
//
//	/*int** sum = new int*[numHouse];
//	for (int i = 0; i < numHouse; i++) {
//		sum[i] = new int[3];
//	}*/
//
//
//	auto Min = [](int a, int b) { return a >= b ? b : a; };
//
//	vector < vector<int>> sum2(numHouse);
//	for (int i = 0; i < numHouse; i++){
//		sum2[i].resize(3);
//		if (0 == i) {
//			sum2[i][0] = data2[0][0];
//			sum2[i][1] = data2[0][1];
//			sum2[i][2] = data2[0][2];
//			continue;
//		}
//		sum2[i][0] = Min(sum2[i - 1][1], sum2[i - 1][2]) + data2[i][0];
//		sum2[i][1] = Min(sum2[i - 1][0], sum2[i - 1][2]) + data2[i][1];
//		sum2[i][2] = Min(sum2[i - 1][0], sum2[i - 1][1]) + data2[i][2];
//	}
//
//	/*for (int i = 0; i < numHouse; i++) {
//		if (0 == i) {
//			sum[i][0] = data[0][0];
//			sum[i][1] = data[0][1];
//			sum[i][2] = data[0][2];
//			continue;
//		}
//
//		sum[i][0] = Min(sum[i-1][1], sum[i-1][2]) + data[i][0];
//		sum[i][1] = Min(sum[i-1][0], sum[i-1][2]) + data[i][1];
//		sum[i][2] = Min(sum[i-1][0], sum[i-1][1]) + data[i][2];
//	}*/
//
//	/*for (int i = 0; i < numHouse; i++) {
//		cout << sum[i][0] << " " << sum[i][1] << " " << sum[i][2] << endl;
//	}*/
//
//	//cout << Min(Min(sum[numHouse - 1][0], sum[numHouse - 1][1]), sum[numHouse - 1][2]);
//	cout << Min(Min(sum2[numHouse - 1][0], sum2[numHouse - 1][1]), sum2[numHouse - 1][2]);
//
//	//for (int i = 0; i < numHouse; i++) {
//	//	delete[] data[i];
//	//	delete[] sum[i];
//	//}
//	//delete[]  data;
//	//delete[]  sum;
//
//	return 0;
//}
//refer to https://m.blog.naver.com/occidere/220785383050

//problem #3
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int size_triagle = 0;
	cin >>size_triagle;

	int sum_triagle[500][500] = {0,};

	int** arr = new int*[size_triagle];
	for (int i = 0; i < size_triagle; i++) {
		arr[i] = new int[size_triagle];
	}

	for (int a = 0; a < size_triagle; a++) {
		for (int b = 0; b <= a; b++) {
			int value;
			cin >> value;
			arr[a][b] = value;
			if (0 == a) {
				sum_triagle[a][b] = arr[a][b];
				continue;
			}

			int max = 0;
			if (b > 0) {
				max = (sum_triagle[a - 1][b-1] > sum_triagle[a - 1][b]) ? sum_triagle[a - 1][b - 1] : sum_triagle[a - 1][b];
			}
			else {
				max = sum_triagle[a - 1][b];
			}
			sum_triagle[a][b] = arr[a][b] + max;
		}
	}

	auto max = std::max_element(std::cbegin(sum_triagle[size_triagle - 1]), std::cend(sum_triagle[size_triagle - 1]));
	cout << *max << endl;
	for (int i = 0; i < size_triagle; i++) {
		delete arr[i];
	}
	delete arr;
}


//problem #4
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

//Problem #5
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	using ull = unsigned long long;
	ull input = 0;
	cin >> input;
	vector<vector<ull>> data;
	vector<ull> row(3, 0);
	data.push_back(row);
	int count = 0;
	data[count][0] = input;
	data[count][1] = input;
	data[count][2] = input;
	while (1 != data[count][0] &&
		1 != data[count][1] &&
		1 != data[count][2]) {
		data.push_back(row);
		int next = count + 1;
		if (data[count][0] > 0) {
			data[next][0] = data[count][0] - 1;
		}


		if (0 == input % 2) {
			data[next][1] = data[count][1] / 2;
		}
		if (0 == input % 3) {
			data[next][2] = data[count][2] / 3;
		}
		++count;
	}
	cout << count << endl;
}
//refer to http://blog.naver.com/PostView.nhn?blogId=occidere&logNo=220787315353