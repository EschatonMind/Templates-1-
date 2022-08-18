#pragma once
#include <iostream>
using namespace std;
template<class T>
class Temp
{

private:
	T obj;
	static int count;

public:
	Temp(T obj) {
		this->obj = obj;
		count++;
		cout << endl << " parameterized constructor created  " << endl << count << endl;
	}

	void print() {
		cout << obj << flush << endl;
	}
};
