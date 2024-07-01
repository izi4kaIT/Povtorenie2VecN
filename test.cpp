#include "pch.h"
#include "C:\Users\Lenovo\source\repos\Povtorenie2Vec\Povtorenie2Vec\VecN.cpp"

TEST(CaseVecN, Test1) {
	std::vector<int> a = { 1, 1 };
	ASSERT_EQ(vectorN(a, 2)[0], vectorN(a, 2)[1]);
	// Тест для проверки, что функция увеличивает ВСЕ элементы 
	// вектора на одинаковое число
	ASSERT_TRUE(vectorN(a, 0) == a);
	// Тест для проверки, что функция увеличивает ВСЕ элементы
	// вектора именно на число n (число, которое мы передаём)
}