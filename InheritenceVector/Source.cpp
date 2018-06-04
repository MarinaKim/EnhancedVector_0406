#include"Vector.h"
#include"EnhancedVector.h"
/*
дл€ удобства можно использовать конструкцию:
try - попробуй сделать что-то где может возникнуть ошибка
catch -  обработай ошибку
*/
int main() {
	Enhanced::EnhancedVector <double> v;//лучше обращатьс€ локально, не использу€ using namespace "им€"
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