/*
 * Stack_test.cpp
 *
 *  Created on: 2019. 1. 27.
 *      Author: Hyeongkyeong Seo
 */

#include <Queue.hpp>
using namespace std;
void Queue_test(void){

	Queue<int> data1;
	data1.push(3);
	data1.push(5);
	data1.push(6);
	cout<<data1.pop()<<endl;
	cout<<data1.pop()<<endl;
	cout<<data1.peek()<<endl;
	data1.print();

	Queue<int> data2;
	cout<<data2.pop()<<endl;
	data2.print();
}
