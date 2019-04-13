#include"header_cZespolona.h"

//bool pred(const cZespolona& z) {
//	z.re > 1 && z.im > 1;
//}
//
//class pred_class {
//	cZespolona prog_;
//public:
//	pred_class(const cZespolona& th) : prog_(th) {}
//	void set_prog(const cZespolona& th) { prog_ = th; }
//	cZespolona prog() { return prog_; }
//
//	bool operator()(const cZespolona& z) {
//		return z < prog;
//	}
//
//
//};

int main()
{
	cZespolona a(1,2), b(2,3), c, z;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	cout << "Podaj liczbe zespolona: ";
	cin >> z;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "sprzezenie a: " << a.conjugate() << endl;
	cout << "arg phi liczby a (w stopniach): " << a.arg() << endl;
	cout << "modul liczby a: " << a.modul() << endl;
	c = (a + b) * 2 + 2 * a / (b + b);
	cout << "c = (a + b) * 2 + 2 * a / ( b + b ) = " << (a + b) * 2 + 2 * a / (b + b) << endl;




	//vector<cZespolona> tab;
	//for (int i = i; i < 20; i++) {
	//	tab.push_back(cZespolona(rand() % 10, rand() % 10));
	//}
	//pred_class progoawnie(cZespolona(2, 2));
	//count_if(tab.begin(), tab.end(), progowanie);

	//sort(tab.begin(), tab.end())

	system("pause");
	return 0;
}