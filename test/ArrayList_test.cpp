#include <gtest/gtest.h>
#include <cstddef>
#include <ArrayList.hpp>

class ArrayListTest: public ::testing::Test {
protected:
	ArrayList<int> data1;
	ArrayList<int> data2;
	ArrayList<int> *data3;
	void SetUp() override {
	}

	void TearDown() override {
	}

};
TEST_F(ArrayListTest, basic) {

	data1.add(11);
	data1.add(11);
	data1.add(33);
	data1.add(22);
	data1.add(22);
	data1.add(55);
	data1.set(4,1);
	data1.removeLast();
	data1.addFirst(100);


	int actual1=data1.at(4);
	int expected1=22;
	ASSERT_EQ(expected1, actual1);

	int actual2=data1.indexOf(22);
	int expected2=4;
	ASSERT_EQ(expected2, actual2);

	int actual3=data1.lastIndexOf(22);
	int expected3=4;
	ASSERT_EQ(expected3, actual3);

	size_t actual4 = data1.size();
	size_t expected4 = 6;
	ASSERT_EQ(expected4, actual4);

	bool actual5 = data1.isEmpty();
	bool expected5 = false;
	ASSERT_EQ(expected5, actual5);


}

