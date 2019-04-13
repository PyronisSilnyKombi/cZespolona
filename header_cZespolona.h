#pragma once
#define _CRT_SECURE_WARNINGS
#define _USE_MATH_DEFINES

#include<conio.h>
#include<iomanip> 
#include<math.h>
#include<cmath>
#include<cstdio>
#include<time.h>
#include<windows.h>
#include<cstdlib>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<fstream>
#include<sstream>
using namespace std;

class pred_class;

class cZespolona {
	
	//atrubuty
	float re, im;

public:
	//metody
	cZespolona();
	cZespolona(const float& _re, const float& _im=0.0)
		:re{ _re }, im{ _im } {}
	cZespolona(const cZespolona& a);
	void pobierz();
	void wyswietl();
	float wyswietl_re();
	float wyswietl_im();
	float modul();
	float arg();
	cZespolona dodaj(const cZespolona& a);
	cZespolona conjugate();

	
	//operatory
	cZespolona operator+(const cZespolona& a);
	cZespolona operator-(const cZespolona& a);
	//cZespolona& operator=(const cZespolona& a);
	cZespolona operator*(const cZespolona& a);
	cZespolona operator*(float d);
	cZespolona operator/(const cZespolona& a);
	//cZespolona operator<(const cZespolona& a);
	friend cZespolona operator*(float d, const cZespolona& a);
	friend ostream& operator<<(ostream& wyjscie, const cZespolona& a);
	friend istream& operator>>(istream& wejscie, cZespolona& a);


	//zaprzyjaźnione funkcje
	friend cZespolona conjugate(const cZespolona& a);
	friend pred_class;
};





	int menu();