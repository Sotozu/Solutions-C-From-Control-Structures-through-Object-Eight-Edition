#pragma once

class IntNode05 {
private:
public:
	int value;
	IntNode05* next;

	IntNode05(int v) {
		value = v;
		next = nullptr;
	}
};