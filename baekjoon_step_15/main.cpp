

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
//long long factorial(long long n);
//long long memo[1000];
//
//int main()
//{
//	int n = 0, k = 0;
//	cin>>n>>k;
//
//	//n! / k! * (n-k)!
//	long long result = factorial(n) / (factorial(k) * factorial(n - k));
//	cout<<result % 10007;
//}
//
//long long factorial(long long n)
//{
//	if (0 == n || 1 == n) {
//		return 1;
//	}
//
//	long long f = 0;
//	if (0 < memo[n]) {
//		f = memo[n];
//	}
//	else {
//		memo[n] = factorial(n - 1);
//		if (0 > memo[n]) {
//			int a = 0;
//		}
//		f = memo[n];
//	}
//	return n * f;
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
