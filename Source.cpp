#include"Temp.h"
int Temp<class a>::count = 0;

template<typename K>
void print(K n) {
	cout << n << endl;
}
int main() {

	Temp<int> t1(23);
	t1.print();
	Temp<string>t2("Hi");
	t2.print();

	print<string>("44");

	return 0;

}