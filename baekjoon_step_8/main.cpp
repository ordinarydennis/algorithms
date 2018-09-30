//Problem #1
/*
#include <iostream>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	int input;

	cin >> input;


	for (int i = 0; i < input; i++) {
		for (int i2 = 0; i2 <= i; i2++) {
			cout << "*";
		}
		cout << endl;
	}
  return 0;
}
*/

//Problem #2
/*
#include <iostream>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	//1 7 19 37 61;
	//6 12 18 24
	int input;
	
	cin >> input;
	int i = 1;
	int first = 1;
	while (input > first){
		int multiply = 6 * (i - 1);
		first += multiply;
		if (input > first) {
			i++;
		}
	} 
	cout << i << endl;

	return 0;
}
*/

//Problem #3
//#include <iostream>
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//	int input = 0;
//
//	cin >> input;
//
//	int a = 1;
//	int b = 1;
//	int turn = 2;
//
//	int count = 1;
//	while (true) {
//		if ((turn % 2) == 0) {
//			if (a < turn && b == 1) {
//				a++;
//			}
//			else if(a > 1 && b < turn){
//				a--;
//				b++;
//			}
//			else {
//				turn++;
//				continue;
//			}
//		}
//		else {
//			if (b < turn && a == 1) {
//				b++;
//			}
//			else if(b > 1 && a < turn){
//				b--;
//				a++;
//			}
//			else {
//				turn++;
//				continue;
//			}
//		}
//
//		count++;
//		if (count == input) {
//			cout << b << "/" << a << endl;
//			break;
//		}
//	}
//}

//Problem #5
//#include <iostream>
//#include <iomanip>
//using std::cout;
//using std::endl;
//using std::cin;
//void printRoomNumber(int h, int w, int n)
//{
//	if (n > h * w) {
//		cout << "Theere is no room " << endl;
//	}
//	int h2 = n % h;
//	int w2 = n / h + 1;
//	if (0 == h2) {
//		h2 = h;
//		w2 -= 1;
//	}
//	
//	cout << h2 << std::setw(2) << std::setfill('0') << w2 << endl;
//}
//int main()
//{
//	int num_of_test = 0; 
//	cin >> num_of_test;
//	
//	for (int i = 0; i < num_of_test; i++) {
//		int h, w, n = 0;
//		cin >> h >> w >> n;
//		printRoomNumber(h, w, n);
//	}
//	return 0;
//}



//Problem #6
//#include <iostream>
//#include <string>
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::cin;
//	using std::string;
//	int year[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//	string weeks[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
//
//	int month;
//	int day;
//
//	cin >> month>> day;
//
//
//	int total_days = 0;
//	for (int i = 0; i < month - 1; i++) {
//		total_days += year[i];
//	}
//	total_days += day;
//
//	int week = total_days % 7;
//	cout << weeks[week] << endl;
//}


//I don't know
//Problem #7
//#include <iostream>
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	int k, n = 0;
//
//	cin >> k >> n;
//
//
//	int num_of_people = 0;
//	for (int i = 0; i < k; i++) {
//		for (int i2 = 0; i2 < n; i2++) {
//			if (0 == i) {
//				num_of_people += i2 + 1;
//			}
//			else {
//				num_of_people += i2 + 1;
//			}
//
//		}
//	}
//
//	cout << num_of_people << endl;
//
//	return 0;
//}

//why is it incorrect.
//Problem #8
//#include <iostream>
//#include <cmath>
//#include <string>
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::cin;
//
//	int room_number = 0;
//
//	cin >> room_number;
//
//	float number_array[11] = { 0, };
//
//	while (room_number > 0) {
//		int number = room_number % 10;
//		
//		if (6 == number || 9 == number) {
//			number_array[10] += 0.5f;
//		}
//		else {
//			number_array[number]++;
//		}
//		room_number = int(room_number / 10);
//	}
//
//	number_array[10] = floor(number_array[10] + 0.5f);
//
//	int max = 0;
//	for (int i = 0; i < 11; i++) {
//		if (number_array[i] > max) {
//			max = number_array[i];
//		}
//	}
//
//	cout << max << endl;
//	
//	return 0;
//}