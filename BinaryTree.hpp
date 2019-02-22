/*
 * BinaryTree.hpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: Hyeongkyeong Seo
 */

#ifndef BINARYTREE_HPP_
#define BINARYTREE_HPP_

#include <cstddef>
#include <cstdbool>
#include <iostream>
#include <exception>

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

public:


	typedef struct stBTNode BTNode;
	typedef struct stBTNode* BTNode_ptr;
	typedef unsigned int node_size;


	BinaryTree();
	virtual ~BinaryTree();


	void clear(void);
	bool isData(T e);
	bool add(T data);
	bool erase(void);
	T first(void);
	T last(void);
	node_size size(void);
	node_size height(void);
	node_size width(void);
	void print(void);

protected:

	BTNode_ptr rootNode;
	node_size BTSize;
	node_size childable;
	node_size BTHeight;


	BTNode_ptr makeOneNode(T data);
	BTNode_ptr getLeftNode(BTNode_ptr parent);
	BTNode_ptr getRightNode(BTNode_ptr parent);
	BTNode_ptr insertLeftNode(BTNode_ptr parent, T data);
	BTNode_ptr insertRightNode(BTNode_ptr parent, T data);
	bool eraseLeftNode(BTNode_ptr n);
	bool eraseRightNode(BTNode_ptr n);




};


template<class T>
BinaryTree<T>::BinaryTree()
{
	// TODO Auto-generated constructor stub
	rootNode=NULL;
	BTSize=0;
	BTHeight=0;
	childable=0;



}

template<class T>
BinaryTree<T>::~BinaryTree()
{
	// TODO Auto-generated destructor stub
}


template<typename T>
void BinaryTree<T>::clear(void) {
	// TODO implementation
}


template<typename T>
bool BinaryTree<T>::add(T data) {
	// TODO implementation
	bool result=true;
	if(BTSize==0){
		rootNode = makeOneNode(data);
	}else{
		insertLeftNode(rootNode,data);
	}
	return (result);
}

template<typename T>
bool BinaryTree<T>::erase(void) {
	// TODO implementation
}

template<class T>
bool BinaryTree<T>::isData(T e) {
	// TODO implementation
}

template<typename T>
T BinaryTree<T>::first(void) {
	// TODO implementation
}

template<typename T>
inline T BinaryTree<T>::last(void) {
	// TODO implementation
}

template<typename T>
typename BinaryTree<T>::node_size BinaryTree<T>::size(void) {
	// TODO implementation
}

template<typename T>
typename BinaryTree<T>::node_size BinaryTree<T>::height(void) {
	/* TODO 검증 필요 */
	unsigned int tmp=BTSize;
	unsigned int cnt=1;
	while(tmp>=2){
		tmp=tmp-2;
		++cnt;
		if(tmp<= 0) break;
	}

}

template<typename T>
typename BinaryTree<T>::node_size BinaryTree<T>::width(void) {
	// TODO implementation
}

template<typename T>
void BinaryTree<T>::print(void) {
	// TODO implementation
}

template<typename T>
typename BinaryTree<T>::BTNode_ptr BinaryTree<T>::makeOneNode(T data) {
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
typename BinaryTree<T>::BTNode_ptr BinaryTree<T>::getLeftNode(BTNode_ptr parent) {
	return (parent->left);
}

template<class T>
typename BinaryTree<T>::BTNode_ptr BinaryTree<T>::getRightNode(BTNode_ptr parent) {
	return (parent->right);
}

template<typename T>
typename BinaryTree<T>::BTNode_ptr BinaryTree<T>::insertLeftNode(BTNode_ptr parent, T data) {
	BTNode_ptr new_node = makeOneNode(data);
	new_node->parent = parent;
	parent->left = new_node;
	return (new_node);
}

template<typename T>
typename BinaryTree<T>::BTNode_ptr BinaryTree<T>::insertRightNode(BTNode_ptr parent, T data) {
	BTNode_ptr new_node = makeOneNode(data);
	new_node->parent = parent;
	parent->right = new_node;
	return (new_node);
}

template<typename T>
bool BinaryTree<T>::eraseLeftNode(BTNode_ptr parent) {
	// TODO implementation
}

template<typename T>
bool BinaryTree<T>::eraseRightNode(BTNode_ptr parent) {
	// TODO implementation
}


#endif /* BINARYTREE_HPP_ */

