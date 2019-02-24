/*
 * BinaryTree.hpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: Hyeongkyeong Seo
 *
 *	Complete Binary Tree(완전이진트리)를 유지하는 BinarTree 자료구조 구현
 *
 *
 */

#ifndef BINARYTREE_HPP_
#define BINARYTREE_HPP_

#include <cstddef>
#include <cstdbool>
#include <iostream>
#include <iomanip>
#include <exception>
#include <cmath>
#include "Queue.hpp"

template <class T>
class BinaryTree {

protected:
	struct stBTNode{
				typedef struct stBTNode* BTNode_ptr;
				T data;
				BTNode_ptr parent;
				BTNode_ptr left;
				BTNode_ptr right;
			};

	typedef struct stBTNode BTNode;
	typedef struct stBTNode* BTNode_ptr;
	typedef unsigned int size_type;

public:
	BinaryTree();
	virtual ~BinaryTree();
	void clear(void);
	bool isData(T e);
	bool isPerfect(void);
	bool isFull(void);
	bool add(T data);
	bool erase(void);
	T first(void);
	T last(void);
	size_type size(void);
	size_type height(void);
	size_type width(void);
	void print(void);

private:

	BTNode_ptr rootNode;
	BTNode_ptr lastNode;
	Queue<BTNode_ptr> writeableNodeList;

	bool perfect;

	size_type BTSize;
	size_type BTheight;
	size_type BTwidth;
	size_type perfect_size;

	BTNode_ptr makeNode(T data);
	BTNode_ptr insertLeftNode(BTNode_ptr parent, BTNode_ptr node);
	BTNode_ptr insertRightNode(BTNode_ptr parent, BTNode_ptr node);
	bool existLeftChild(BTNode_ptr node);
	bool existRightChild(BTNode_ptr node);
	bool eraseLeftNode(BTNode_ptr n);
	bool eraseRightNode(BTNode_ptr n);

};


template<class T>
BinaryTree<T>::BinaryTree()
{
	rootNode=NULL;
	lastNode=NULL;
	BTSize=0;
	BTheight=0;
	BTwidth=0;
	perfect=false;
	perfect_size=1;

}

template<class T>
BinaryTree<T>::~BinaryTree()
{
	// TODO Auto-generated destructor stub
	clear();
}


template<typename T>
void BinaryTree<T>::clear(void) {
	// TODO implementation
}


template<typename T>
bool BinaryTree<T>::add(T data) {
	// TODO implementation
	bool result=true;
	BTNode_ptr newNode = makeNode(data);
	if(BTSize==0){
		this->rootNode=newNode;
		this->BTheight=1;
		this->BTwidth=1;
		this->BTSize=1;
		this->perfect=true;
		this->perfect_size=3;
	}else{
		if(writeableNodeList.peek()->left == NULL){
			insertLeftNode(writeableNodeList.peek(),newNode);
		}else{
			insertRightNode(writeableNodeList.peek(),newNode);
			writeableNodeList.pop();
		}
		if(perfect==true){
			this->perfect=false;
			this->BTwidth = (size_type)pow(2,this->BTheight);
			this->BTheight++;

		}

		BTSize++;
		if(BTSize==perfect_size){
			perfect_size = perfect_size + (size_type)pow(2,BTheight);
			perfect=true;
		}

	}
	lastNode=newNode;
	writeableNodeList.push(newNode);



	return (result);
}

template<typename T>
bool BinaryTree<T>::erase(void) {
	// TODO implementation
	bool result;

	return (result);
}

template<class T>
bool BinaryTree<T>::isData(T e) {
	// TODO 이진트리 검색 알고리즘 적용
	bool result;

	return (result);
}

template<class T>
bool BinaryTree<T>::isPerfect(void) {
	return (this->perfect);
}
template<class T>
bool BinaryTree<T>::isFull(void) {
	return ((this->BTSize%2!=0));
}

template<class T>
bool BinaryTree<T>::existLeftChild(BTNode_ptr node) {
	return (node->left!=NULL);
}

template<class T>
bool BinaryTree<T>::existRightChild(BTNode_ptr node) {
	return (node->right!=NULL);
}

template<typename T>
T BinaryTree<T>::first(void) {
	T result;
	if(this->BTSize>0){ result=this->rootNode->data; }
	return (result);
}

template<typename T>
inline T BinaryTree<T>::last(void) {
	T result;
	if(this->BTSize>0){ result=this->lastNode->data; }
	return (result);
}

template<typename T>
typename BinaryTree<T>::size_type BinaryTree<T>::size(void) {
	return (this->BTSize);
}

template<typename T>
typename BinaryTree<T>::size_type BinaryTree<T>::height(void) {
	return (this->BTheight);

}

template<typename T>
typename BinaryTree<T>::size_type BinaryTree<T>::width(void) {
	return (this->BTwidth);
}

template<typename T>
void BinaryTree<T>::print(void) {
	// TODO implementation (ing)
	using std::cout;
	using std::endl;
	using std::setw;
	using std::left;

	BTNode_ptr curr_node = this->rootNode;
	cout<<setw(5)<<left<<curr_node->data;
	if(curr_node->right!=NULL){
		cout<<"  ┬  "<<setw(5)<<left<<curr_node->right->data;
	}


}

template<typename T>
typename BinaryTree<T>::BTNode_ptr BinaryTree<T>::makeNode(T data) {
	BTNode_ptr node;
	try{
		node = new BTNode;
	}catch(std::exception& e){
		std::cout<<e.what()<<std::endl;
	}

	node->data=data;
	node->parent=NULL;
	node->left=NULL;
	node->right=NULL;
	return (node);
}


template<typename T>
typename BinaryTree<T>::BTNode_ptr BinaryTree<T>::insertLeftNode(BTNode_ptr parent, BTNode_ptr node) {
	node->parent = parent;
	parent->left = node;
	return (node);
}

template<typename T>
typename BinaryTree<T>::BTNode_ptr BinaryTree<T>::insertRightNode(BTNode_ptr parent, BTNode_ptr node) {
	node->parent = parent;
	parent->right = node;
	return (node);
}

template<typename T>
bool BinaryTree<T>::eraseLeftNode(BTNode_ptr parent) {

	bool result = true;
	BTNode_ptr node_to_del = parent->left;
	try{
		delete node_to_del;
	}catch(std::exception& e){
		result = false;
		std::cout<<e.what()<<std::endl;
	}
	parent->left = NULL;

	return (result);

}

template<typename T>
bool BinaryTree<T>::eraseRightNode(BTNode_ptr parent) {
	bool result = true;
	BTNode_ptr node_to_del = parent->right;
	try{
		delete node_to_del;
	}catch(std::exception& e){
		result = false; /* TODO: 의미가 있나? */
		std::cout<<e.what()<<std::endl;
	}
	parent->right = NULL;

	return (result);
}


#endif /* BINARYTREE_HPP_ */

