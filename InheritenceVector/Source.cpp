#include"Vector.h"
#include"EnhancedVector.h"
/*
��� �������� ����� ������������ �����������:
try - �������� ������� ���-�� ��� ����� ���������� ������
catch -  ��������� ������
*/
int main() {
	Enhanced::EnhancedVector <double> v;//����� ���������� ��������, �� ��������� using namespace "���"
	v.push_back(5);
	v.push_back(12);
	try {
		for (int i = 0;i < v.size();i++)
			cout << v[i - 12] << endl;
	}
	catch (char *txt) {
		cout << txt << endl;
	}
	system("pause");
	return 0;
}