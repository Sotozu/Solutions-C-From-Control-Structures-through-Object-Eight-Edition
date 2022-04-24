#pragma once

#include "11 SortableVector.h"

template < class T>
class SearchableVector : public SortableVector <T>
{
public:
	// Default constructor 
	SearchableVector() : SortableVector<T>()
	{ }

	// Constructor 
	SearchableVector(int size) : SortableVector<T>(size)
	{ }

	// Copy constructor 
	SearchableVector(const SearchableVector&);

	// Accessor to find an item 
	int findItem(const T);

	int sortAndSearch(T v);

};

//******************************************************* 
// Copy constructor * 
//******************************************************* 

template < class T>
SearchableVector<T>::SearchableVector(const SearchableVector& obj) :
	SortableVector<T>(obj.size())
{
	for (int count = 0; count < this->size(); count++)
		this->operator[](count) = obj[count];
}

//******************************************************** 
// findItem function * 
// This function searches for item. If item is found * 
// the subscript is returned. Otherwise -1 is returned. * 
//******************************************************** 

//template < class T>
//int SearchableVector<T>::findItem(const T item)
//{
//	for (int count = 0; count <= this->size(); count++)
//	{
//	 if (this->getElementAt(count) == item)
//		return count;
//	}
//
//	return -1;
// }


template < class T>
int SearchableVector<T>::findItem(const T item)
{
	int min = 0,
		max = this->size() - 1,
		mid;

	while (min <= max) {
		mid = (min + max) / 2;
		if (this->getElementAt(mid) == item) {
			return mid;
		}
		else if (this->getElementAt(mid) > item) {
			max = mid - 1;
		}
		else {
			min = mid + 1;
		}
	}
	return -1;

}

template < class T>
int SearchableVector<T>::sortAndSearch(const T item)
{
	//performs sort from least to greatest
	this->sort();

	//binary search of the array
	return this->findItem(item);

}