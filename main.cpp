#include <iostream>
#include <string>

struct A {
	std::string aField;
};

struct B : A {
	std::string bField;
};

int main() {
	A a = { .aField = "A text" };
	B copied,  moved;

	copied.A::operator=(a);

	std::cout << "After copy:" << std::endl;
	std::cout << "  a.aField = " << a.aField << std::endl;
	std::cout << "  copied.aField = " << copied.aField << std::endl;
	std::cout << "  moved.aField = " << moved.aField << std::endl;

	moved.A::operator=(std::move(a));

	std::cout << "After move:" << std::endl;
	std::cout << "  a.aField = " << a.aField << std::endl;
	std::cout << "  copied.aField = " << copied.aField << std::endl;
	std::cout << "  moved.aField = " << moved.aField << std::endl;

	return 0;
}
