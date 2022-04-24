#include <iostream>
#include "03 Static Queue Template.h"
int main() {
	double d;
	StaticQueueTemplate03<double> Queue(5);

	for (int i = 0; i < 5; i++) {
		Queue.enqueue(i * 1.2);
	}

	Queue.enqueue(11);

	for (int i = 0; i < 5; i++) {
		Queue.dequeue(d);
		std::cout << d << std::endl;
	}

	Queue.dequeue(d);

	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;

	for (int i = 0; i < 5; i++) {
		Queue.enqueue(i * 1.2);
	}
	Queue.dequeue(d);
	Queue.enqueue(11);

	for (int i = 0; i < 5; i++) {
		Queue.dequeue(d);
		std::cout << d << std::endl;
	}
	return 0;
}