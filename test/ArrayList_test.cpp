/*
 * ArrayList_test.cpp
 *
 *  Created on: 2019. 1. 27.
 *      Author: Hyeongkyeong Seo
 */

#include <ArrayList.hpp>
using namespace std;
void ArrayList_test(void){

	ArrayList<int> data1;

	data1.add(11);
	data1.add(11);
	data1.add(33);
	data1.add(22);
	data1.add(22);
	data1.add(55);
	data1.set(4,1);
	data1.removeLast();
	data1.addFirst(100);


	data1.print();

	cout<<"size:"<<data1.size()<<endl;
	cout<<"indexOf(22):"<<data1.indexOf(22)<<endl;
	cout<<"lastIndexOf(22):"<<data1.lastIndexOf(22)<<endl;
	cout<<"at(5):"<<data1.at(5)<<endl;



	ArrayList<string> data2;
	data2.add("steve");
	data2.add("crystal");
	data2.add("hyeongkyeong");
	data2.print();
	cout<<"size: "<<data2.size()<<endl;
	cout<<"indexOf(hyeongkyeong): "<<data2.indexOf("hyeongkyeong")<<endl;
	data2.at(2);
	data2.removeAll();
	data2.print();

}
