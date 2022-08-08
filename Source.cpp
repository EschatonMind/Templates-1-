#include"Temp.h"
int Temp<int>::count = 0;
int main() {

	Temp<int> t1(23);
	t1.print();
	return 0;
}