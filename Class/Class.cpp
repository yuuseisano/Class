#include <iostream>


struct A
{
	char a;
	int b;
	char c;
	double d;
	float e;
	unsigned int f;
	unsigned long g;
	unsigned char h;
	unsigned short i;
	unsigned long long j;
};
int main()
{
	std::cout << sizeof(A) << std::endl;

	//std::cout << alignof(A) << std::endl;

}