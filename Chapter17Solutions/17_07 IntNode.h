#pragma once

class IntNode07 {
private:
public:
	int value;
	IntNode07* next;

	IntNode07(int v) {
		value = v;
		next = nullptr;
	}
};