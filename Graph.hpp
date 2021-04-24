/*
 * Graph.h
 *
 *  Created on: 2019. 2. 6.
 *      Author: Hyeongkyeong Seo
 */

#ifndef GRAPH_HPP_
#define GRAPH_HPP_

#include <cstddef>
#include <cstdbool>
#include <iostream>
#include "LinkedList.hpp"


template <class T>
class Graph  : public LinkedList<T>{



public:
	Graph();
	virtual ~Graph();

//	typedef LinkedList<T>::Node Node;

	void addNode(T data);
//	void addEdge(Node n1, Node n2);
};



template<class T>
Graph<T>::Graph()
{
	// TODO Auto-generated constructor stub

}

template<class T>
Graph<T>::~Graph()
{
	// TODO Auto-generated destructor stub
}



#endif /* GRAPH_HPP_ */
