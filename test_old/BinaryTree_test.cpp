#ifndef DEBUG
/*
 * Tree_test.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: Hyeongkyeong Seo
 */

#include <BinaryTree.hpp>
#include <iostream>
using namespace std;
void BinaryTree_test(void){

	BinaryTree<int> data1;
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(2);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(5);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(7);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;
	data1.add(10);
	cout<<"data:"<<data1.last()<<", size:"<<data1.size()<<", perfect:"<<data1.isPerfect()<<", full:"<<data1.isFull()<<", height:"<<data1.height()<<", width:"<<data1.width()<<endl;

	data1.print();

}
#endif
