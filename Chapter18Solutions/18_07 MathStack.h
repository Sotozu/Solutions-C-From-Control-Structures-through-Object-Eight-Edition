#pragma once

// Specification file for the MathStack class 

#include "07 IntStack.h"

class MathStack07 : public IntStack07
{
public:
// Constructor 
MathStack07(int s) : IntStack07(s) {}

// MathStack operations 
void add();
void sub();
void mult();
void div();
void addAll();
void multAll();
 };
