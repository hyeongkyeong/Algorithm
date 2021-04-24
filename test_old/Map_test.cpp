#ifndef DEBUG
/*
 * Map_test.cpp
 *
 *  Created on: 2019. 2. 19.
 *      Author: Hyeongkyeong Seo
 */

#include <Map.hpp>
#include <iostream>
#include <map>
using namespace std;
void Map_test(void){


	//선언
	map<string, int> data1;

	// insert 쓰기
	data1.insert(pair<string,int>("piano", 2));
	data1.insert(pair<string,int>("guitar", 3));
	data1.insert(pair<string,int>("violin", 5));

	// []접근 (쓰기)
	map<string, int> data2;
	data2["piano"]=7;
	data2["guitar"]=8;
	data2["violin"]=9;

	cout<<"====== []접근 (읽기) ======"<<endl;
	// []접근 (읽기)
	cout<<data1["piano"]<<endl;
	cout<<data2.at("piano")<<endl;

	// find() (접근)
	cout<<"====== find() (접근) ======"<<endl;
	data1.find("piano")->second = 3;
	cout<<data1.find("piano")->second<<endl;
	cout<<data2.find("piano")->second<<endl;

	// 반복 iterator
	cout<<"====== 반복 iterator ======"<<endl;
	map<string,int>::iterator it;
	for(it=data1.begin();it!=data1.end();it++){
	  cout<<it->first<<","<<it->second<<endl;
	}

	// 비교 key comparison
	cout<<"====== key 비교 comparison ======"<<endl;
	map<int,int,less<int> > m1;
	map<int,int,less<int> >::key_compare kcm1 = m1.key_comp( ) ;
	cout<<"kcm1( 2, 3 ): "<<kcm1( 2, 3 )<<endl;
	cout<<"kcm1( 2, 2 ): "<<kcm1( 2, 2 )<<endl;
	cout<<"kcm1( 3, 2 ): "<<kcm1( 3, 2 )<<endl;

	map<int,int,greater<int> > m2;
	map<int,int,greater<int> >::key_compare kcm2 = m2.key_comp( ) ;
	cout<<"kcm2( 2, 3 ): "<<kcm2( 2, 3 )<<endl;
	cout<<"kcm2( 2, 2 ): "<<kcm2( 2, 2 )<<endl;
	cout<<"kcm2( 3, 2 ): "<<kcm2( 3, 2 )<<endl;

	// 비교 value comparison (??)
	cout<<"====== key 비교 comparison ======"<<endl;
	map<char,int> m3;
	map<char,int>::value_compare kvm3 = m3.value_comp();
	m3['x']=1001;
	m3['y']=2002;
	m3['z']=3003;
	//cout<<"kvm3(1001,1002): "<<kvm3(1001,1002)<<endl;
	//cout<<"kvm3(1002,1002): "<<kvm3(1002,1002)<<endl;
	//cout<<"kvm3(1002,1001): "<<kvm3(1002,1001)<<endl;
}
#endif /* DEBUG */
