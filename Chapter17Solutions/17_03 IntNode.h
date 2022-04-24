#pragma once

class IntNode03 {
private:
public:
	int value;
	IntNode03* next;

	IntNode03(int v) {
		value = v;
		next = nullptr;
	}
};