#include <iostream>
#include <cmath>

#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
	double re;	// �������������� ����� �����
	double im;	// ������ ����� �����
public:
	Complex();	// ������ ����� ������ 0

	Complex(double, double);	// ������� ����� � ���������� ������ � �������������� �������

	void setNumber(double, double);	// ����� �������������� � ������ �����

	double getRe();	// ���������� �������������� ����� �����

	double getIm();	// ���������� ������ ����� �����

	double countModule();	// ���������� ������ ������������ �����

	Complex& operator= (const Complex&);	// ������������� �������� ����������

	friend const Complex operator+ (const Complex&, const Complex&);	// ��������

	friend const Complex operator- (const Complex&, const Complex&);	// ���������

	friend const Complex operator* (const Complex&, const Complex&);	// ���������

	friend const Complex operator/ (const Complex&, const Complex&);	// �������

	friend std::ostream& operator<< (std::ostream&, const Complex&);	// �����

	~Complex();	// ����������
};

#endif /* COMPLEX_H_ */#pragma once
