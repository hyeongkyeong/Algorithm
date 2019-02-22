
/*
 * Stack.hpp
 *
 *  Created on: 2019. 1. 27.
 *      Author: Hyeongkyeong Seo
 */

#ifndef STACK_HPP_
#define STACK_HPP_

#include <cstddef>
#include <cstdbool>
#include <iostream>

#include "LinkedList.hpp"




template <class T>
class Stack : protected LinkedList<T>{

public:
	Stack();
	virtual ~Stack();
	void push(T e);
	T pop(void);
	T peek(void);
	void clear(void);
	size_t size(void);
	bool isEmpty(void);
	void print(void);
	void printReverse(void);
};



template<class T>
Stack<T>::Stack() {

}

template<class T>
Stack<T>::~Stack() {
	clear();
}

template<class T>
void Stack<T>::push(T e) {

	LinkedList<T>::append(e);

}

template<class T>
T Stack<T>::pop(void) {

	T data;
	int lastIndex = (int)(LinkedList<T>::lastIndex);
	data = LinkedList<T>::at(lastIndex);
	LinkedList<T>::removeLast();

	return (data);
}

template<class T>
T Stack<T>::peek(void) {

	return (LinkedList<T>::at(LinkedList<T>::lastIndex));
}

template<class T>
void Stack<T>::clear(void) {

	LinkedList<T>::removeAll();
}


template<class T>
size_t Stack<T>::size(void) {
	/*return (topIndex+1); */
	return (LinkedList<T>::size());
}

template<class T>
bool Stack<T>::isEmpty(void) {
	return (LinkedList<T>::isEmpty());
}

template<class T>
void Stack<T>::print(void) {
	LinkedList<T>::print();
}


template<class T>
void Stack<T>::printReverse(void) {
	LinkedList<T>::printReverse();
}

#endif /* STACK_HPP_ */
