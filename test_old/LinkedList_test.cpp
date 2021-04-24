#ifndef DEBUG
/*
 * ArrayList_test.cpp
 *
 *  Created on: 2019. 1. 27.
 *      Author: Hyeongkyeong Seo
 */


#include <LinkedList.hpp>
#include <String>
using namespace std;
void LinkedList_test(void){

		LinkedList<int> data1;
		data1.append(3);
		data1.append(5);
		data1.append(7);
		cout<<data1.indexOf(7)<<endl;
		cout<<"data1.at(2):"<<data1.at(2)<<endl;
		data1.print();

		LinkedList<string> data2;
		data2.append("steve");
		data2.append("crystal");
		data2.append("david");
		data2.prepend("tim");
		//cout<<data2.removeLast()<<endl;
		//cout<<data2.removeLast()<<endl;
		//cout<<data2.removeLast()<<endl;
		//cout<<data2.removeLast()<<endl;
		//data2.removeAll();
		//data2.removeFirst();
		data2.add(1,"hkseo");
		data2.print();
		//data2.printReverse();

		cout<<data2.at(0)<<endl;
		cout<<data2.at(3)<<endl;
		string tmp="hkseo";
		cout<<data2.indexOf((string)"hkseo")<<endl;
	}

#endif
