// Struct_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"


struct Student1 {
	char name[20];
	char ID[12];
	int age;
	float height[2];
}A[2];

Student1 B[2] = {
	{"txx1","17787822351",21,{11,12}},
	{ "txx2","17787822352",22,{ 13,14 }},//结构体中的数组赋值
};



int main()
{

	using namespace std;

	for (int i = 0; i < 2; i++)
	{
		A[i] = { B[i] };//结构体赋值语句,需要使用大括号
	}
	std::cout << B[1].name << endl;
	std::cout << B[1].ID << endl;
	std::cout << B[1].age << endl;
	std::cout << B[1].height[1] << endl;

	std::cin.get();
	std::cin.get();
	return 0;
}

