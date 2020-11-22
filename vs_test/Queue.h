#pragma once
//#include<cstdlib>


template<class Type>
class Queue
{
private:
	struct Node
	{
		Type item;
		Node* next;
	};
	enum
	{
		Q_size = 10
	};
	Node* front;
	Node* rear;
	int items;
	const int qsize = Q_size;
	Queue(const Queue& q) : qsize(0) {};
	Queue& operator=(const Queue& q) { return *this; };
public:
	Queue(int qs = Q_size);
	~Queue();
	bool isEmpty() const;
	bool isFull() const;
	int queueCount() const;
	bool enQueue(const Type &item);
	bool deQueue(Type &item);	
};

template<class Type>
Queue<Type>::Queue(int qs) {
	front = rear = nullptr;
	items = 0;
}

template<class Type>
Queue<Type>::~Queue() {
	Node* temp;
	while (front) {
		temp = front;
		front = front->next;
		delete temp;
	}
}


template<class Type>
bool Queue<Type>::isEmpty() const {
	if (items != 0) {
		return false;
	}
	else {
		return true;
	}
}

template<class Type>
bool Queue<Type>::isFull() const {
	if (items < qsize) {
		return false;
	}
	else {
		return true;
	}
}

template<class Type>
int Queue<Type>::queueCount() const {
	return items;
}

template<class Type>
bool Queue<Type>::enQueue(const Type& item) {
	if (isFull()) {
		return false;
	}
	Node* add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;
	if (front == nullptr) {
		front = add;
		rear = add;
	}
	else {
		rear->next = add;
		rear = add;
	}
	return true;
}

template<class Type>
bool Queue<Type>::deQueue(Type& item) {
	if (isEmpty()) {
		return false;
	}
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0) {
		rear = nullptr;
	}
	return true;
}

