/*
 * LinkedList.hpp
 *
 *  Created on: 2019. 1. 26.
 *      Author: Hyeongkyeong Seo
 */

#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_

#include <cstddef>
#include <cstdbool>
#include <iostream>
#include <cstring>

template <class T>
class LinkedList {

protected:
	struct stNode{
		typedef stNode* Node_ptr;	/* TODO 이 문법은 무엇일까 */
		T data;
		Node_ptr past;
		Node_ptr next;
	};

public:
	typedef struct stNode Node;
	typedef struct stNode* Node_ptr;

private:
	Node head;
	Node tail;
	int lastIndex;
	Node *getNode(int idx){
		Node *curr=head.next;
		if((idx>=0) && (idx<=lastIndex)){
			for(int i=0;i<idx;i++){
				curr = curr->next;
			}
		}else{
			curr=NULL;
		}
		return (curr);
	}

public:
	LinkedList();
	virtual ~LinkedList();
	size_t size(void);
	int indexOf(T obj);
	int lastIndexOf(T obj);
	T at(int idx);
	bool set(int idx, T e);
	bool add(int idx, T e);
	bool addFirst(T e);
	bool append(T e);
	bool prepend(T e);
	bool removeDataAll(T e);
	bool removeDataFirst(T e);
	bool removeDataLast(T e);
	bool removeAll(void);
	bool removeLast(void);
	bool removeFirst(void);
	bool isEmpty(void);
	void print(void);
	void printReverse(void);


};


template <class T>
LinkedList<T>::LinkedList() {
	head.past = NULL;
	head.next = NULL;
	tail.past = NULL;
	tail.next = NULL;
	lastIndex = -1;

}

template <class T>
LinkedList<T>::~LinkedList() {
	removeAll();
}


template<class T>
size_t LinkedList<T>::size(void) {
	size_t listSize;
	if(lastIndex<0){
		listSize=0;
	}else{
		listSize = (size_t)(lastIndex+1);
	}
	return (listSize);
}


template<class T>
bool LinkedList<T>::prepend(T e) {

	bool retval;
	Node *node = new Node;
	if(node!=NULL){
		node->data = e;
		if (head.next == NULL) {
			head.next = node;
			node->next = &tail;
			node->past = &head;
			tail.past = node;
		} else {
			node->past = &head;
			node->next = head.next;
			head.next->past=node;
			head.next=node;
		}
		lastIndex++;
		retval = true;
	}else{
		perror("error: LinkedList<T>::append(T e): new fail\n");
		retval = false;
	}
	return (retval);

}

template<class T>
bool LinkedList<T>::append(T e) {
	bool retval;
	Node *node = new Node;
	if(node!=NULL){
		node->data = e;
		if (head.next == NULL) {
			head.next = node;
			node->next = &tail;
			node->past = &head;
			tail.past = node;
		} else {
			node->past = tail.past;
			node->next = &tail;
			tail.past->next = node;
			tail.past = node;
		}
		lastIndex++;
		retval = true;
	}else{
		perror("error: LinkedList<T>::append(T e): new fail\n");
		retval = false;
	}
	return (retval);

}

template<class T>
T LinkedList<T>::at(int idx) {


	T data;;
	if((idx>=0) && (idx<=lastIndex)){
		Node *curr=head.next;
		for(int i=0;i<idx;i++){
			curr  = curr->next;
		}
		data = curr->data;

	}
	return (data);

}

template<class T>
bool LinkedList<T>::set(int idx, T e) {
	bool retval;
	Node *curr=getNode(idx);
	if(curr!=NULL){
		curr->data = e;
		retval = true;
	}else{
		retval = false;
	}
	return (retval);
}

template<class T>
bool LinkedList<T>::add(int idx, T e) {
	// TODO implementation
	bool retval;
	Node *newNode = new Node;
	Node *nextNode=getNode(idx);

	if(newNode!=NULL && nextNode!=NULL){
		Node *beforeNode=nextNode->past;
		newNode->data=e;
		beforeNode->next=newNode;
		newNode->past=beforeNode;
		newNode->next=nextNode;
		nextNode->past=newNode;
		retval = true;
	}else{
		retval = false;
	}
	return (retval);
}

template<class T>
bool LinkedList<T>::addFirst(T e){
	return (prepend(e));
}

template<class T>
int LinkedList<T>::indexOf(T obj) {
	// TODO implementation
	// 숫자 자료형만으로 제한됨
	int idx=-1;

	Node *curr=head.next;
	for(int i=0;i<=lastIndex;i++){
		if(memcmp(&(curr->data), &obj, sizeof(obj))==0){
			idx=i;
			break;
		}
		curr = curr->next;
	}

	return (idx);
}

template<class T>
int LinkedList<T>::lastIndexOf(T obj) {
	// TODO implementation
	int idx;

	return (idx);
}

template<class T>
bool LinkedList<T>::removeLast(void) {
	bool retval;
	Node *toRemove = tail.past;
	if(!isEmpty()){
		if(lastIndex==0){
			head.next=NULL;
			tail.past=NULL;
		}else{
			toRemove->past->next = &tail;
			tail.past = toRemove->past;
		}
		delete toRemove;
		toRemove = NULL;
		retval = true;
		lastIndex--;
	}else{
		retval = false;
	}
	return (retval);
}

template<class T>
bool LinkedList<T>::removeFirst(void) {
	bool retval;
	Node *toRemove = head.next;
	if(!isEmpty()){
		if(lastIndex==0){
			head.next=NULL;
			tail.past=NULL;
		}else{
			toRemove->next->past = &head;
			head.next = toRemove->next;
		}
		delete toRemove;
		toRemove=NULL;
		retval = true;
		lastIndex--;
	}else{
		retval = false;
	}
	return (retval);
}

template<class T>
bool LinkedList<T>::removeDataAll(T e) {
	bool retval;
	// TODO implementation
	return (retval);
}

template<class T>
bool LinkedList<T>::removeDataFirst(T e) {
	bool retval;
	// TODO implementation
	return (retval);
}

template<class T>
bool LinkedList<T>::removeDataLast(T e) {
	bool retval;
	// TODO implementation
	return (retval);
}

template<class T>
bool LinkedList<T>::removeAll(void) {
	bool retval = true;
	unsigned int count  = size();
	while(count!=0){
		removeLast();
		count--;
	}

	head.next = NULL;
	tail.past = NULL;
	lastIndex = -1;

	return (retval);

}

template<class T>
bool LinkedList<T>::isEmpty(void) {
	bool retval;
	if(lastIndex<0){
		retval = true;
	}else{
		retval = false;
	}
	return (retval);
}

template<class T>
void LinkedList<T>::print(void) {
	if(!isEmpty()){
		Node *toPrint = head.next;
		for (int i = 0; i <= lastIndex; i++) {
			if (toPrint != NULL) {
				std::cout <<"[" << i << "]: "<<toPrint->data<<std::endl;
				toPrint = toPrint->next;
			}
		}
	}else{
		std::cout <<"[empty]"<<std::endl;
	}

}

template<class T>
void LinkedList<T>::printReverse(void) {
	if(!isEmpty()){
		Node *toPrint = tail.past;
		for (int i = 0; i <= lastIndex; i++) {
			if (toPrint != NULL) {
				std::cout<< "[" <<(lastIndex - i)<<"]: "<< toPrint->data<<std::endl;
				toPrint = toPrint->past;
			}
		}
	}else{
		std::cout <<"[empty]"<<std::endl;
	}

}


#endif /* LINKEDLIST_HPP_ */
