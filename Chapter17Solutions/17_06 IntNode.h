#pragma once

class IntNode06 {
private:
public:
	int value;
	IntNode06* next;

	IntNode06(int v) {
		value = v;
		next = nullptr;
	}
};