#include <iostream>
#include <array>
#include <string>

using std::array;
using uint = unsigned int;

template<typename T>
class Queue
{
	
public:
	Queue()
	{

	
	}
	~Queue()
	{

	}
	void Push(T e)
	{
		if (num_of_element >= MAX_ARRAY_SIZE) {
			return ;
		}
		rear_index = getRearIndex();
		elements[rear_index] = e;
		num_of_element++;
	}
	T Front()
	{
		if (0 == num_of_element) {
			return -1;
		}
		return elements[getFrontIndex()];
	}
	T Back()
	{
		if (0 == num_of_element) {
			return -1;
		}
		return elements[rear_index];
	}
	T Pop()
	{
		if (0 == num_of_element) {
			return -1;
		}
		--num_of_element;
		front_index = getFrontIndex();
		return elements[front_index];
	}
	int Size()
	{
		return num_of_element;
	}
	int Empty()
	{
		return (num_of_element <= 0) ? 1 : 0;
	}

private:
	int getRearIndex()
	{
		return (rear_index + 1) % MAX_ARRAY_SIZE;
	}
	int getFrontIndex()
	{
		return (front_index + 1) % MAX_ARRAY_SIZE;
	}

	static const int MAX_ARRAY_SIZE = 10000;
	array<T, MAX_ARRAY_SIZE> elements = { 0, };
	int front_index = -1;
	int rear_index = -1;
	int num_of_element = 0;
};

//problem #1
//int main()
//{
//	int input_cout = 0;
//	std::cin >> input_cout;
//	std::cin.ignore();
//	Queue<int> queue;
//	for (int i = 0; i < input_cout; i++) {
//		std::string command;
//		std::cin >> command;
//		if ("push" == command) {
//			int input = 0;
//			std::cin >> input;
//			queue.Push(input);
//		}
//		if ("pop" == command) {
//			printf("%d\n", queue.Pop());
//		}
//		else if ("front" == command) {
//			printf("%d\n", queue.Front());
//		}
//		else if ("back" == command) {
//			printf("%d\n", queue.Back());
//		}
//		else if ("size" == command) {
//			printf("%d\n", queue.Size());
//		}
//		else if ("empty" == command) {
//			printf("%d\n", queue.Empty());
//		}
//	}
//}

//problem #4
int main()
{
	int n = 0;
	int m = 0;
	Queue<int> queue;
	std::cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		queue.Push(i);
	}

	printf("<");
	while (queue.Size()) {
		if (1 == queue.Size()) {
			printf("%d", queue.Pop());
			break;
		}
		for (int i = 0; i < m - 1; i++) {
			queue.Push(queue.Pop());
		}
		printf("%d", queue.Pop());
		printf(", ");
	}
	printf(">");
	return 0;
}