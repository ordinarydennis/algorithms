

//problem #1
/*
#include <iostream>
using std::cin;
int factorial(int n);
int main()
{
	int n = 0, k = 0;
	cin>>n>>k;

	//n! / k! * (n-k)!
	int result = factorial(n) / (factorial(k) * factorial(n - k));
	printf("%d", result);
}

int factorial(int n)
{
	if (0 == n || 1 == n) {
		return 1;
	}

	return n * factorial(n - 1) ;
}
*/

//problem #2
//#include <iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//const int MAX_Y = 1000;
//const int MAX_X = 1000;
//int main()
//{
//	int triangle[MAX_Y][MAX_X] = {0,};
//	triangle[0][0] = 1;
//	triangle[1][0] = 1;
//	triangle[1][1] = 1;
//
//	for (int y = 2; y < MAX_Y; y++) {
//		for (int x = 0; x < MAX_X; x++) {
//			if (0 == x || x == y) {
//				triangle[y][x] = 1;
//			}
//			else {
//				triangle[y][x] = (triangle[y - 1][x - 1] + triangle[y - 1][x]) % 10007;
//			}
//		}
//	}
//	//for (int y = 0; y < MAX_Y; y++) {
//	//	for (int x = 0; x < MAX_X; x++) {
//	//		if (0 == triangle[y][x]) {
//	//			continue;
//	//		}
//	//		cout << triangle[y][x] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	int n = 0, k = 0;
//	cin >> n >> k;
//	cout <<triangle[n][k]<< endl;
//}


//problem #4
//#include <iostream>
//using std::cin;
//int factorial(int n);
//int main()
//{
//	int n = 0;
//	cin >> n;
//	printf("%d", factorial(n));
//}
//
//int factorial(int n)
//{
//	if (0 == n || 1 == n) {
//		return 1;
//	}
//
//	return n * factorial(n - 1);
//}


//problem #5
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int n = 0;
	cin >> n;
	int count = 0;
	int t = 0;
	for (int i = n; i > 0; i--) {
		t = i;
		while (0 == t % 5) {
			t = t / 5;
			count++;
		}
	}
	cout << count << endl;
}
