/*
 * ArrayList.hpp
 *
 *  Created on: 2019. 1. 13.
 *      Author: Hyeongkyeong Seo
 */

#ifndef ARRAYLIST_HPP_
#define ARRAYLIST_HPP_

#include <cstddef>
#include <cstdbool>
#include <iostream>

template <class T>
class ArrayList {

private:
	const unsigned int max_size = 1000000;
	unsigned int capacity;
	T* elements;
	int lastIndex;

public:
	ArrayList();
	ArrayList(const unsigned int n);
	virtual ~ArrayList();

	size_t size(void);
	int indexOf(T obj);
	int lastIndexOf(T obj);
	T at(int idx);
	bool set(int idx, T e);
	bool addFirst(T e);
	bool add(T e);
	bool add(int idx, T e);
	bool remove(int idx);
	bool removeAll(void);
	bool removeLast(void);
	bool removeFirst(void);
	bool isEmpty(void);
	void print(void);
};

template <typename T>
ArrayList<T>::ArrayList() {
	capacity=max_size;
	elements=new T[capacity];
	lastIndex=-1;
}

template <class T>
ArrayList<T>::ArrayList(const unsigned int n) {

	if(n>0) {
		capacity=n;
	}else{
		capacity=max_size;
	}
	elements = new T[capacity];
	lastIndex = n-1;
}

template <class T>
ArrayList<T>::~ArrayList() {
	delete[] elements;
}

template <class T>
unsigned int ArrayList<T>::size(void) {

	return ((unsigned int)lastIndex + 1);
}

template <class T>
int ArrayList<T>::indexOf(T obj) {
	int retval=0;
	for(int i=0;i<=lastIndex;i++){
		if(elements[i] == obj){
			retval = i;
			break;
		}else{
			if(i==lastIndex){
				perror("error: ArrayList::indexOf(): there is no value in this list.\n");
				retval = -1;
			}
		}

	}
	return (retval);
}

template <class T>
int ArrayList<T>::lastIndexOf(T obj) {
	int retval=0;
	for(int i=lastIndex;i>=0;i--){
		if(elements[i] == obj){
			retval = i;
			break;
		}else{
			if(i==0){
				perror("error: ArrayList::lastIndexOf(): there is no value in this list.\n");
				retval = -1;
			}
		}

	}
	return (retval);
}

template <class T>
T ArrayList<T>::at(int idx) {

	T retval=T();

	if(idx<=lastIndex){
		retval = elements[idx];
	}else{
		perror("error: ArrayList::get(): idx is not avilable\n");
		retval = -1;
	}


	return (retval);
}

template <class T>
bool ArrayList<T>::set(int idx, T e) {
	bool retval;
	if(idx<=lastIndex){
		elements[idx]=e;
		retval = true;
	}else{
		perror("error: ArrayList::set(): idx is not valid.\n");
		retval = false;
	}
	return (retval);

}

template <class T>
bool ArrayList<T>::addFirst(T e) {

	return (add(0,e));
}

template <class T>
bool ArrayList<T>::add(int idx, T e) {
	bool retval;
	lastIndex++;
	if((unsigned int)lastIndex<capacity && lastIndex>=0){
		if(lastIndex==0){
			elements[0]=e;
		}else{
			for(int i=lastIndex;i>idx;i--){
				elements[i] = elements[i-1];
			}
		}
		elements[idx]=e;
		retval = true;

	}else{
		perror("error: ArrayList::add(): max_size is over\n");
		retval = false;

	}

	return (retval);

}

template <class T>
bool ArrayList<T>::add(T e) {
	return (add(lastIndex+1,e));
}

template <class T>
bool ArrayList<T>::remove(int idx) {
	bool retval=false;
	if((!isEmpty()) && (idx>=0)){
		lastIndex--;
		for(int i=idx;i<=lastIndex;i++){
			elements[i] = elements[i+1];
		}
		retval = true;
	}else{
		retval = false;
	}

	return (retval);

}

template<class T>
inline bool ArrayList<T>::removeAll(void) {
	bool retval=true;
	while(!isEmpty()){
		if(!removeLast()){
			retval = false;
			break;
		}
	}
	lastIndex=-1;
	return (retval);
}

template <class T>
bool ArrayList<T>::removeLast(void) {
	return (remove(lastIndex));
}

template <class T>
bool ArrayList<T>::removeFirst(void) {
	return (remove(0));
}

template <class T>
bool ArrayList<T>::isEmpty(void) {
	bool retval;
	if(lastIndex==-1){
		retval = true;
	}
	else{
		retval = false;
	}
	return (retval);
}

template<class T>
void ArrayList<T>::print(void) {
	if(!isEmpty()){
	for(int i=0;i<=lastIndex;i++){
		std::cout<<"["<<i<<"]: "<<elements[i]<<std::endl;
	}
	}else{
		std::cout<<"[empty]"<<std::endl;
	}
}


#endif /* ARRAYLIST_HPP_ */
