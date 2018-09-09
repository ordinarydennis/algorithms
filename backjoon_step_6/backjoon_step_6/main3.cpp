#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int count_test;
	cin >> count_test;
	cin.ignore();	//clear input buffer refer to http://dodnet.tistory.com/488
	std::vector<string> quiz_list(count_test);
	for (string& quiz : quiz_list) {
		//Why is not entered \n ?
		getline(cin, quiz);
	}

	for (string& quiz : quiz_list) {
		int collect = 0; 
		int sum = 0;
		for (const auto c : quiz) {
			if (c == 'o' || c == 'O') {
				collect++;
				sum += collect;
			}
			else{
				collect = 0;
			}
		}
		cout << sum << endl;
	}

	return 0;
}
