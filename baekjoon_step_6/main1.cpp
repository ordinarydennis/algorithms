#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input_str;
	getline(cin, input_str);

	if (1000000 < input_str.length()) {
		return 1;
	}

	int word_count = 0;
	bool start_word = false;

	for (char& c : input_str) {
		if (' ' == c) {
			if (true == start_word) {
				word_count++;
				start_word = false;
			}
		}
		else {
			if (false == start_word) {
				start_word = true;
			}
		}
	}

	if (true == start_word) {
		word_count++;
		start_word = false;
	}

	cout << word_count << endl;
	return 0;
}