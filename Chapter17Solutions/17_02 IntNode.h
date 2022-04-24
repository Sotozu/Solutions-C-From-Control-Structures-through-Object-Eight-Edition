#pragma once

class IntNode02 {
private:
public:
	int value;
	IntNode02* next;

	IntNode02(int v) {
		value = v;
		next = nullptr;
	}
};