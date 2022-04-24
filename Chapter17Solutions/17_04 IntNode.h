#pragma once

class IntNode04 {
private:
public:
	int value;
	IntNode04* next;

	IntNode04(int v) {
		value = v;
		next = nullptr;
	}
};