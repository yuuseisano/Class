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

	int8_t a;
	int32_t b;
	int8_t c;
	float d;
	double e;
	uint32_t f;
	uint64_t g;
	uint16_t h;
	uint8_t i;
};
int main()
{
	std::cout << sizeof(A) << std::endl;

	//std::cout << alignof(A) << std::endl;

}