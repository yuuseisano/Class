#include <iostream>


struct A
{
	char a;
	int b;
	char c;
};

struct B
{
	char a;
	char b;
	int c;
};

struct C
{
	int a;
	char b;
	char c;
};
int main()
{
	std::cout << sizeof(A) << std::endl;
	std::cout << sizeof(B) << std::endl;
	std::cout << sizeof(C) << std::endl;

	//std::cout << alignof(A) << std::endl;

}