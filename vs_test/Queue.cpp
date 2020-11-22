//#include "Queue.h"
////#include<cstdlib>
//
//template<class Type>
//Queue<Type>::Queue(int qs) {
//	front = rear = nullptr;
//	items = 0;
//}
//
//template<class Type>
//Queue<Type>::~Queue() {
//	Node* temp;
//	while (front) {
//		temp = front;
//		front = front->next;
//		delete temp;
//	}
//}
//
//
//template<class Type>
//bool Queue<Type>::isEmpty() const {
//	if (items != 0) {
//		return false;
//	}
//	else {
//		return true;
//	}
//}
//
//template<class Type>
//bool Queue<Type>::isFull() const {
//	if (items < qsize) {
//		return false;
//	}
//	else {
//		return true;
//	}
//}
//
//template<class Type>
//int Queue<Type>::queueCount() const {
//	return items;
//}
//
//template<class Type>
//bool Queue<Type>::enQueue(const Type& item) {
//	if (isFull()) {
//		return false;
//	}
//	Node* add = new Node;
//	add->item = item;
//	add->next = nullptr;
//	items++;
//	if (front == nullptr) {
//		front = add;
//	}
//	else {
//		rear->next = add;
//		rear = add;
//	}
//	return true;
//}
//
//template<class Type>
//bool Queue<Type>::deQueue(Type& item) {
//	if (isEmpty()) {
//		return false;
//	}
//	item = front->item;
//	items--;
//	Node* temp = front;
//	front = front->next;
//	delete temp;
//	if (items == 0) {
//		rear = nullptr;
//	}
//	return true;
//}
