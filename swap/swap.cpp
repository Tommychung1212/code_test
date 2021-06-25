#include <iostream>
//#include <string>

#define PI 3.1415926
#define EXP 2.71828

template <class T>
void swap2(T &x, T &y)
{
        T temp = x;
        x = y;
        y = temp;
}

int main()
{
	char char1 = 'a'; char char2 = 'b';
	int int1 = 1; int int2 = 2;
	float float1 = 0.5; float float2 = 1.5;
	double double1 = PI; double double2 = EXP;
	std::string str1 = "Hello"; std::string str2 = "World";
	const char *charptr1 = "Welcome"; const char *charptr2 = "to C++";

	swap2<char>(char1, char2);
	swap2<int>(int1, int2);
	swap2<float>(float1, float2);
	swap2<double>(double1, double2);
	swap2<std::string>(str1, str2);
	swap2<const char *>(charptr1, charptr2);

	std::cout << "char swap result: char1 = " << char1 << ", char2 = " << char2 << std::endl;
	std::cout << "int swap result: int1 = " << int1 << ", int2 = " << int2 << std::endl;
	std::cout << "float swap result: float1 = " << float1 << ", float2 = " << float2 << std::endl;
	std::cout << "double swap result: double1 = " << double1 << ", double2 = " << double2 << std::endl;
	std::cout << "string swap result: str1 = " << str1 << ", str2 = " << str2 << std::endl;
	std::cout << "charptr swap result: charptr1 = " << charptr1 << ", charptr2 = " << charptr2 << std::endl;

	return 0;
}
