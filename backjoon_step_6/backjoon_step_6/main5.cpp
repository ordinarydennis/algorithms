#include <iostream>
#include <array>
int main()
{
	using std::array;
	using std::cout;
	using std::cin;
	using std::endl;
	array<int, 5> scores;

	for (int& score : scores) {
		cin >> score;
	}

	int total = 0;
	for (int& score : scores) {
		if (40 > score) {
			score = 40;
		}
		total += score;
	}

	cout << static_cast<int>(total / 5) << endl;

}