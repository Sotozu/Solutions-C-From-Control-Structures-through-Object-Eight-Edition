#include <iostream>
#include "04 Dynamic Queue Template.h"

int main() {
	int v;
	char c;
	DynamicQueueTemplate04<int> Queue1;
	DynamicQueueTemplate04<char> Queue2;

	for (int i = 65; i < 75; i++) {
		Queue1.enqueue(i);
		Queue2.enqueue(static_cast<char>(i));
	}

	while (!Queue1.isEmpty()) {
		Queue1.dequeue(v);
		std::cout << v << std::endl;
	}

	std::cout << std::endl;

	while (!Queue2.isEmpty()) {
		Queue2.dequeue(c);
		std::cout << c << std::endl;
	}




	std::cout << std::endl;
	Queue1.dequeue(v);
	std::cout << std::endl;
	Queue2.dequeue(c);

	for (int i = 65; i < 75; i++) {
		Queue1.enqueue(i);
		Queue2.enqueue(static_cast<char>(i));
	}

	std::cout << std::endl;
	Queue1.dequeue(v);
	Queue2.dequeue(c);

	while (!Queue1.isEmpty()) {
		Queue1.dequeue(v);
		std::cout << v << std::endl;
	}

	std::cout << std::endl;

	while (!Queue2.isEmpty()) {
		Queue2.dequeue(c);
		std::cout << c << std::endl;
	}



	return 0;
}