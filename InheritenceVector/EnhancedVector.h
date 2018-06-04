#pragma once
#include"Vector.h"
namespace Enhanced {//����� ��������� ������� ���������� � ���� namespace
template<typename T>
	class EnhancedVector : public Vector<T> {
	public:
		T& operator[](size_t index) throw() { // � ����� ������������ ����� ���������� throw()  � ��� �������
			if (index >= cur_size)
				throw("Incorrect index");
			else
				return els[index];
		}
	};
};