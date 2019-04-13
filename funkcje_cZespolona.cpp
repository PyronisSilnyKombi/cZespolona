#include"header_cZespolona.h"

cZespolona::cZespolona() {
	re = 0;
	im = 0;
}

cZespolona::cZespolona(const cZespolona & a)
{
	this->re = a.re;
	this->im = a.im;
}

void cZespolona::pobierz()
{
	float re, im;
	cout << "Podaj czesc rzeczywista liczby zespolonej: ";
	cin >> re;
	this->re = re;
	cout << "Podaj czesc urojona liczby zespolonej: ";
	cin >> im;
	this->im = im;
	system("cls");
}

void cZespolona::wyswietl()
{
	if (re != 0)cout << re;
	if (im > 0) cout << "+";
	if (im != 0)cout << im;
	if (im != 0) cout << "i";
	if (re == 0 && im == 0) cout << "0";
}

float cZespolona::wyswietl_re()
{
	return re;
}

float cZespolona::wyswietl_im()
{
	return im;
}

float cZespolona::modul()
{
	return sqrt(pow(re,2) + pow(im,2));
}

cZespolona cZespolona::dodaj(const cZespolona& a)
{
	float r = this->re + a.re;
	float i = this->im + a.im;
	cZespolona x(r, i);
	return x;
}

cZespolona cZespolona::conjugate()
{
	im*=(-1);
	return *this;
}

float cZespolona::arg()
{
	float s = asin(im / (this->modul())) * 180 / M_PI;
	if (re > 0 && im > 0) return s;
	if (im > 0 && re < 0) return (s + 90);
	if (re < 0 && im < 0) return (s*(-1) + 180);
	if (im < 0 && re > 0) return s * (-1) + 270;
}

cZespolona cZespolona::operator+(const cZespolona & a)
{
	float r = this->re + a.re;
	float i = this->im + a.im;
	cZespolona x(r, i);
	return x;
}

cZespolona cZespolona::operator-(const cZespolona & a)
{
	float r = this->re - a.re;
	float i = this->im - a.im;
	cZespolona x(r, i);
	return x;
}

//cZespolona& cZespolona::operator=(const cZespolona& a)
//{
//	this->re = a.re;
//	this->im = a.im;
//	return *this;
//}

cZespolona cZespolona::operator*(float d)
{
	re *= d;
	im *= d;
	return *this;
}

cZespolona cZespolona::operator/(const cZespolona & a)
{
	float r = (this->re * a.re + (this->im * a.im)) / (pow(a.re, 2) + pow(a.im, 2));
	float i = (this->im * a.re - (this->re * a.im)) / (pow(a.re, 2) + pow(a.im, 2));
	cZespolona x(r, i);
	return x;
}

//cZespolona cZespolona::operator<(const cZespolona & a)
//{
//	z.re > 1 && z.im > 1;
//	return cZespolona();
//}

cZespolona cZespolona::operator*(const cZespolona & a)
{
	float r = this->re * a.re + (this->im * a.im)*(-1);
	float i = this->re * a.im + (this->im * a.re);
	cZespolona x(r, i);
	return x;
}

cZespolona operator*(float d, const cZespolona & a)
{
	cZespolona b = a;
	return b*d;
}

ostream& operator<<(ostream& wyjscie, const cZespolona& a)
{
	if (a.re != 0) wyjscie << a.re;
	if (a.im > 0) wyjscie << "+";
	if (a.im != 0) wyjscie << a.im;
	if (a.im != 0) wyjscie << "i";
	if (a.re == 0 && a.im == 0) wyjscie << "0";
	return wyjscie;
}

istream& operator>>(istream& wejscie, cZespolona& a)
{
	wejscie >> a.re >> a.im;
	return wejscie;
}

cZespolona conjugate(const cZespolona & a)
{
	return cZespolona(a.re, a.im*(-1));
}

int menu() {
	int liczba;
	cout << "MENU : " << endl;
	cout << "1 - " << endl;
	cout << "2 - " << endl;
	cout << "3 - " << endl;
	cout << "4 - " << endl;
	cout << "5 - " << endl;
	cout << "6 - " << endl;
	cout << "7 - " << endl;
	cout << "8 - " << endl;
	cout << "9 - " << endl;
	cout << "10 - " << endl;
	cout << "11 - " << endl;
	cout << "Podaj liczbe : "; cin >> liczba;
	system("cls");
	return liczba;
}