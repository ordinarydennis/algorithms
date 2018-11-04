#include <iostream>
#include <string>
#include <memory>
#include <array>

using std::cin;
using std::string;
using std::array;

class Stack
{
public:
	Stack();
	~Stack();
	void Push(int n);
	int Pop();
	size_t Size();
	int Top();

private:
	static const int STACK_SIZE = 100000;
	array<int, STACK_SIZE> stack = { 0, };
	int stack_index = -1;
};
Stack::Stack()
{
}
Stack::~Stack()
{
}
void Stack::Push(int n)
{
	if (STACK_SIZE - 1 <= stack_index) {
		return ;
	}

	stack[++stack_index] = n;
}
int Stack::Pop()
{
	if (-1 == stack_index) {
		return stack_index;
	}
	int pop_index = stack_index--;
	return stack.at(pop_index);
}
size_t Stack::Size()
{
	return stack_index + 1;
}
int Stack::Top()
{
	if (-1 == stack_index) {
		return stack_index;
	}
	return stack.at(stack_index);
}

//1
//int main()
//{
//	int num_of_command = 0;
//	cin >> num_of_command;
//	cin.ignore();
//
//	std::unique_ptr<Stack> stack = std::make_unique<Stack>();
//
//	for (int i = 0; i < num_of_command; i++) {
//		string str_command;
//		cin >> str_command;
//
//		if ("push" == str_command) {
//			int input_n = 0;
//			cin >> input_n;
//			cin.ignore();
//			stack->Push(input_n);
//		}
//		else if ("pop" == str_command) {
//			printf("%d\n", stack->Pop());
//		}
//		else if ("size" == str_command) {
//			printf("%d\n", stack->Size());
//		}
//		else if ("empty" == str_command) {
//			bool isEmpty = !static_cast<bool>(stack->Size());
//			printf("%d\n", isEmpty);
//		}
//		else if ("top" == str_command) {
//			printf("%d\n", stack->Top());
//		}
//	}
//	return 0;
//}


// 2
//#include <vector>
//using std::vector;
//int main()
//{
//	int input_n = 0;
//	cin >> input_n;
//
//	std::unique_ptr<Stack> stack = std::make_unique<Stack>();
//	vector<int> v_int;
//	for (int i = 0; i < input_n; i++) {
//		int n = 0;
//		cin >> n;
//		v_int.push_back(n);
//	}
//
//	int stack_v = 0;
//	vector<string> v_string;
//	for (auto n : v_int) {
//		while (true) {
//			if (n > stack->Top()) {
//				stack_v++;
//				stack->Push(stack_v);
//				v_string.push_back("+");
//			}
//			else if (n == stack->Top()) {
//				stack->Pop();
//				v_string.push_back("-");
//				break;
//			}
//			else {
//				printf("NO\n");
//				return 0;
//			}
//		}
//	}
//
//	for (auto s : v_string) {
//		printf("%s\n", s.c_str());
//	}
//	return  0;
//}

//3
//int main()
//{
//	int input_n = 0;
//	cin >> input_n;
//	cin.ignore();
//
//	for (int i = 0; i < input_n; i++) {
//		string input_str = "";
//		getline(cin, input_str);
//		std::unique_ptr<Stack> stack = std::make_unique<Stack>();
//		
//		bool isNo = 0;
//		for (auto c : input_str) {
//			if ('(' == c) {
//				stack->Push(1);
//			}
//			else if(')' == c && 0 < stack->Size()){
//				stack->Pop();
//			}
//			else {
//				isNo = 1;
//				break;
//			}
//		}
//
//		if (0 == stack->Size() && isNo == 0) {
//			printf("YES\n");
//		}
//		else{
//			printf("NO\n");
//		}
//	}
//}

//4  
//int main()
//{
//	string input_s = "";
//	cin >> input_s;
//
//	const int S_PARENTHESIS = 0;
//	const int B_PARENTHESIS = 1;
//
//	std::unique_ptr<Stack> stack = std::make_unique<Stack>();
//
//	int sum = 1;
//	for (auto c : input_s) {
//		if ('(' == c) {
//			stack->Push(S_PARENTHESIS);
//		}
//		else if ('[' == c) {
//			stack->Push(B_PARENTHESIS);
//		}
//		else if (')' == c && 0 < stack->Size() || ']' == c && 0 < stack->Size()) {
//			int top = stack->Top();
//			if (S_PARENTHESIS == top) {
//				stack->Pop();
//				stack->Push(2);
//			}
//			else if (B_PARENTHESIS == top) {
//				stack->Pop();
//				stack->Push(3);
//			}
//			else {
//				int sum = 0;
//				int pop = 0;
//				do {
//					pop = stack->Pop();
//					sum += pop;
//					pop = stack->Top();
//				} while (pop != S_PARENTHESIS && pop != B_PARENTHESIS);
//
//				pop = stack->Pop();
//				if (S_PARENTHESIS == pop) {
//					stack->Push(sum * 2);
//				}
//				else if (B_PARENTHESIS == pop) {
//					stack->Push(sum * 3);
//				}
//			}
//		}
//		else {
//			printf("0\n");
//			return 0;
//		}
//	}
//
//	int sum2 = 0;
//	while (-1 != stack->Top()) {
//		int pop = stack->Pop();
//		sum2 += pop;
//	}
//	printf("%d\n",sum2);
//	return 0;
//}