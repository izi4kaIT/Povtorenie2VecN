#include "pch.h"
#include "C:\Users\Lenovo\source\repos\Povtorenie2Vec\Povtorenie2Vec\VecN.cpp"

TEST(CaseVecN, Test1) {
	std::vector<int> a = { 1, 1 };
	ASSERT_EQ(vectorN(a, 2)[0], vectorN(a, 2)[1]);
	// ���� ��� ��������, ��� ������� ����������� ��� �������� 
	// ������� �� ���������� �����
	ASSERT_TRUE(vectorN(a, 0) == a);
	// ���� ��� ��������, ��� ������� ����������� ��� ��������
	// ������� ������ �� ����� n (�����, ������� �� �������)
}