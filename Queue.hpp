/*
 * Stack.hpp
 *
 *  Created on: 2019. 1. 27.
 *      Author: Hyeongkyeong Seo
 */

#ifndef QUEUE_HPP_
#define QUEUE_HPP_

#include <LinkedList.hpp>
#include <cstddef>
#include <cstdbool>
#include <iostream>

//#include <queue>

template <class T>
class Queue : protected LinkedList<T>{

public:
	Queue();
	virtual ~Queue();
	void push(T e);
	void enqueue(T e);
	T pop(void);
	T dequeue(void);
	T peek(void);
	void clear(void);
	size_t size(void);
	bool isEmpty(void);
	void print(void);
	void printReverse(void);
};




template<class T>
Queue<T>::Queue() {

}

template<class T>
Queue<T>::~Queue() {
	clear();
}

template<class T>
void Queue<T>::push(T e) {

	LinkedList<T>::append(e);

}

template<class T>
void Queue<T>::enqueue(T e) {
	push(e);
}

template<class T>
T Queue<T>::pop(void) {

	T data;
	int lastIndex = (int)(LinkedList<T>::lastIndex);
	data = LinkedList<T>::at(lastIndex);
	LinkedList<T>::removeLast();

	return (data);
}

template<class T>
T Queue<T>::dequeue(void) {
	return (pop());
}

template<class T>
T Queue<T>::peek(void) {

	return (LinkedList<T>::at(LinkedList<T>::lastIndex));
}

template<class T>
void Queue<T>::clear(void) {

	LinkedList<T>::removeAll();
}


template<class T>
size_t Queue<T>::size(void) {
	/*return (topIndex+1); */
	return (LinkedList<T>::size());
}

template<class T>
bool Queue<T>::isEmpty(void) {
	return (LinkedList<T>::isEmpty());
}

template<class T>
void Queue<T>::print(void) {
	LinkedList<T>::print();
}

template<class T>
void Queue<T>::printReverse(void) {
	LinkedList<T>::printReverse();
}

#endif /* QUEUE_HPP_ */
