#pragma once

class IntNode01 {
private:
public:
	int value;
	IntNode01* next;

	IntNode01(int v) {
		value = v;
		next = nullptr;
	}
};