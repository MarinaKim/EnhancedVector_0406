#pragma once
#include"Vector.h"
namespace Enhanced {//можно несколько классов объединять в один namespace
template<typename T>
	class EnhancedVector : public Vector<T> {
	public:
		T& operator[](size_t index) throw() { // в новых компиляторах можно пропускать throw()  в это строчке
			if (index >= cur_size)
				throw("Incorrect index");
			else
				return els[index];
		}
	};
};