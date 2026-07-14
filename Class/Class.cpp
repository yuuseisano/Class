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

	virtual ~A() {
		std::cout << "A:::~A()" << std::endl;
	}
	 //~A() {}

	//void Foo(){}

};

class B : public A
{
public:
	virtual ~B()
	{
		std::cout << "B:::~B()" << std::endl;
	}
};

int main()
{
	//A a;
	B b;
	//memset(&a, 0, sizeof(a));
	//memcpy(&b, &a, sizeof(b));
	//std::cout << sizeof(a) << std::endl;
	std::cout << sizeof(b) << std::endl;




	//std::cout << alignof(A) << std::endl;

}