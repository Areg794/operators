#include<iostream>
class A {
private:
	int value;

public:

	A(int val) : value(val) {}

	bool operator<(const A& other) {
		return value < other.value;
	}
	bool operator>(const A& other) {
		return value > other.value;
	}
};
int main() {
	A obj(5);
	A obj1(10);
	if (obj > obj1) {
		std::cout << "obj>obj1" << std::endl;
	}
	else if (obj < obj1) {
		std::cout << "obj<obj1" << std::endl;
	}
	else {
		std::cout << "obj=obj1" << std::endl;
	}
	return 0;
}