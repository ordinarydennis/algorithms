#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num[3] = { 0 };
	int total = 1;
	for (int i = 0; i < 3; ++i) {
		cin >> num[i];

	}
	for (int i = 0; i < 3; ++i) {
		total *= num[i];
	}

	int number_array[10] = { 0 };
	int last_number = 0;
	do {
		last_number = total % 10;
		number_array[last_number]++;
		total = total / 10;
	} while (total > 0);


	for (auto& number : number_array) {
		cout << number << endl;
	}

	return 0;
}