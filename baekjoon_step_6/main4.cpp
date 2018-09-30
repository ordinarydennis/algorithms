#include <iostream>
#include <array>
#include <map>
enum class KEY
{
	none,
	ascending,
	descending,
	mixed
};
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::array;

	array<int, 8> input{ 0 };

	for (int& i : input) {
		cin >> i;
	}


	KEY result = KEY::none;
	for (int i = 0; i < 7; i++) {
		int current_key = input[i];
		int next_key = input[i + 1];
		int deff = next_key - current_key;
		if (-1 == deff) {
			if (KEY::none == result) {
				result = KEY::descending;
			}
			else if (KEY::descending != result){
				result = KEY::mixed;
				break;
			}
		}
		else if (1 == deff) {
			if (KEY::none == result) {
				result = KEY::ascending;
			}
			else if (KEY::ascending != result) {
				result = KEY::mixed;
				break;
			}
		}
		else {
			//mix;
			result = KEY::mixed;
			break;
		}
	}
	const std::map<KEY, const char*> EnumClassStrings{
		{ KEY::ascending, "ascending" },
		{ KEY::descending, "descending" },
		{ KEY::mixed, "mixed" }
	};
	cout << EnumClassStrings.find(result)->second << endl;

	return 0;
}