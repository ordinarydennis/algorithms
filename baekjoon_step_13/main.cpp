#include <iostream>
#include <string>
#include <memory>

template<typename T>
class Node
{
public:
	Node(T data)
	{
		this->data = data;
		this->next = NULL;
		this->prev = NULL;
	}

	void setNext(Node* next)
	{
		this->next = next;
	}

	void setPrev(Node* prev)
	{
		this->prev = prev;
	}

	void setData(T data)
	{
		this->data = data;
	}

	Node* getNext()
	{
		return next;
	}

	Node* getPrev()
	{
		return prev;
	}

	T getData()
	{
		return data;
	}
private:
	T data;
	Node* next;
	Node* prev;
};



template<typename T>
class Deque
{
public:
	Deque()
	{
		front = NULL;
		rear = NULL;
	}
	~Deque()
	{
		Node<T>* tmp = front;
		while (tmp != NULL) {
			tmp = tmp->getNext();
			delete(front);
			front = tmp;
		}
	}

	void setFront(Node<T>* front) {
		this->front = front;
	}

	void setRear(Node<T>* rear) {
		this->rear = rear;
	}

	Node<T>* getFront()
	{
		return front;
	}

	Node<T>* getRear()
	{
		return rear;
	}

	bool empty() {
		if (front == NULL) return true;
		else return false;

	}
	bool push_front(T data)
	{
		size++;
		if (empty()) {
			front = new Node<T>(data);
			rear = front;
			return true;

		}
		front->setPrev(new Node<T>(data));
		front->getPrev()->setNext(front);
		front = front->getPrev();
		return true;
	}

	bool push_rear(T data)
	{
		size++;
		if (empty())
		{
			rear = new Node<T>(data);
			front = rear;
			return true;
		}

		rear->setNext(new Node<T>(data));
		rear->getNext()->setPrev(rear);
		rear = rear->getNext();
		return true;
	}

	T pop_front()
	{
		if (empty()) return -1;
		T tmp = front->getData();
		size--;
		if (front == rear) {
			delete(front);
			front = NULL;
			rear = NULL;
			return tmp;
		}

		front = front->getNext();
		delete(front->getPrev());
		front->setPrev(NULL);
		return tmp;
	}

	T pop_rear()
	{
		if (empty()) return -1;
		T tmp = rear->getData();
		size--;
		if (front == rear) {
			delete(rear);
			front = NULL;
			rear = NULL;
			return tmp;
		}

		rear = rear->getPrev();
		delete(rear->getNext());
		rear->setNext(NULL);
		return tmp;

	}
	int getSize()
	{
		return size;
	}
	T begin()
	{
		return front->getData();
	}
	T end()
	{
		return rear->getData();
	}
private:
	Node<T>* front;
	Node<T>* rear;
	int size = 0;
};

using std::cin;
using std::string;

int main()
{
	auto deque_int = std::make_unique<Deque<int>>();

	int command_count = 0;
	cin >> command_count;

	for (int i = 0; i < command_count; i++) {
		string input;
		cin >> input;
		cin.ignore();
		if ("push_front" == input) {
			int input = 0;
			cin >> input;
			deque_int->push_front(input);
		}
		else if ("push_back" == input) {
			int input = 0;
			cin >> input;
			deque_int->push_rear(input);
		}
		else if ("pop_front" == input) {
			printf("%d \n", deque_int->pop_front());
		}
		else if ("pop_back" == input) {
			printf("%d \n", deque_int->pop_rear());
		}
		else if ("size" == input) {
			printf("%d \n", deque_int->getSize());
		}
		else if ("empty" == input) {
			printf("%d \n", deque_int->empty() ? 1 : 0);
		}
		else if ("front" == input) {
			int data = deque_int->getFront() == NULL ? -1 : deque_int->getFront()->getData();
			printf("%d \n", data);
		}
		else if ("back" == input) {
			int data = deque_int->getRear() == NULL ? -1 : deque_int->getRear()->getData();
			printf("%d \n", data);
		}
	}
}