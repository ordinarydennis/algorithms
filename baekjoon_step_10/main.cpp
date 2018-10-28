
/* problem #1
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	int input_n;
	cin >> input_n;
	vector<int> v_int;
	for (int i = 0; i < input_n; i++) {
		int input;
		cin >> input;
		v_int.push_back(input);
	}
	int num = 0;
	for (auto e : v_int) {
		int num2 = 0;
		for (int i = 1; i <= e; i++) {
			if (0.f == e % i) {
				num2++;
			}
		}
		if (2 == num2) {
			num++;
		}

	}
	cout << num << endl;
}
*/


/* problem #2
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
	int first;
	cin >> first;

	int second;
	cin >> second;

	vector<int> v_input;
	int sum = 0;
	int first2 = 0;
	for (int i = first; i <= second; i++) {
		int num = 0;
		for (int i2 = 1; i2 <= i; i2++) {
			if (0.f == i % i2) {
				num++;
			}
		}

		if (2 == num) {
			sum += i;
			if (sum == i) {
				first2 = i;
			}
		}

	}
	if (first2 > 0) {
		cout << sum << endl;
		cout << first2 << endl;
	}
	else {
		cout << -1 << endl;
	}
}
*/

/* problem #3  time over
#include <iostream>
#include <vector>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	int first = 0, second = 0;
	cin >> first >> second;

	vector<int> v_int;

	for (int i = 2; i <= second; i++) {
		v_int.push_back(i);
	}

	for (auto e : v_int) {
		if (sqrt(second) >= e && e > 0) {
			int n = e;
			while (n + e <= second) {
				n += e;
				v_int[n - 2] = 0;
			}
		}
	}

	for (int i = first; i <= second; i++) {
		if (v_int[i - 2] == 0) continue;
		cout << v_int[i - 2] << endl;
	}
}
*/

/* problem #4
#include <iostream>
#include <vector>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	int input;

	while (true) {
		cin >> input;
		if (0 == input) {
			break;
		}

		vector<int> v_int;
		int n2 = input * 2;
		for (int i = 2; i <= n2; i++) {
			v_int.push_back(i);
		}

		for (auto e : v_int) {
			if (sqrt(n2) >= e && e > 0) {
				int n = e;
				while (n + e <= n2) {
					n += e;
					v_int[n - 2] = 0;
				}
			}
		}

		int count = 0;
		for (int i = input + 1; i <= n2; i++) {
			if (v_int[i - 2] == 0) continue;
			
			count++;
		}

		cout << count << endl;
	}

	return 0;
}
*/


/* problem #5 
#include <iostream>
#include <vector>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	int input = 0;
	cin >> input;

	static const int MAX = 10000;

	vector<bool> v_int;
	for (int i = 2; i <= MAX; i++) {
		v_int.push_back(i);
	}

	for (int i = 0; i <= sqrt(MAX) - 2; i++) {
		if (false == v_int[i]) {
			continue;
		}

		int i2 = v_int[i * i];
		while (i2 <= MAX) {
			v_int[i2 - 2] = 0;
			i2 += i2;
		}
	}


	for (auto e : v_int) {
		cout << e << endl;
	}
	
	for (int i = 0; i < input; i++) {
	
	}

	return 0;
}
*/