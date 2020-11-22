#pragma once
#include<iostream>
#include<cstring>
#include "Queue.h"


using std::cout;
using std::endl;

int main() {
	Queue<int> q1(10);
	for (int i = 0; i < 10; i++) {
		q1.enQueue(i);
	}

	int item;
	while (q1.deQueue(item)) {
		cout << item << endl;
	}

	return 0;
}