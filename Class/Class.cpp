#include <iostream>


struct A
{
	//char a;
	//int b;
	//char c;
	//double d;
	//float e;
	//unsigned int f;
	//unsigned long g;
	//unsigned char h;
	//unsigned short i;
	//unsigned long long j;
	uint8_t j;
	int8_t c;
	uint8_t i;
	int8_t a;
	double e;
	float d;

	uint16_t h;
	uint32_t f;
	int32_t b;
	uint64_t g;


};
int main()
{
	A a;

	memset(&a, 0, sizeof(a));
	//std::cout << sizeof(A) << std::endl;
	std::cout << a.a << std::endl;
	std::cout << a.b << std::endl;
	std::cout << a.c << std::endl;
	std::cout << a.d << std::endl;
	std::cout << a.e << std::endl;
	std::cout << a.f << std::endl;
	std::cout << a.g << std::endl;
	std::cout << a.h<< std::endl;
	std::cout << a.i << std::endl;
	std::cout << a.j << std::endl;




	//std::cout << alignof(A) << std::endl;

}