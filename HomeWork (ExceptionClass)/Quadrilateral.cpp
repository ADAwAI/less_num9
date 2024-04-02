#include "Quadrilateral.h"
#include "GeometryException.h"
#include <iostream>

Quadrilateral::Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D)
    : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        throw GeometryException("��� ������� ��������������� ������ ���� ������ ����.");
    }
    if (A + B + C + D != 360) {
        throw GeometryException("����� ����� ��������������� ������ ���� ����� 360 ��������.");
    }
    // �������� ������������� ���������������
    if (a + b + c <= d || a + b + d <= c || a + c + d <= b || b + c + d <= a) {
        throw GeometryException("����� ���� ����� ��� ������ ������ ���� ������ ����� �������� �������.");
    }
}

void Quadrilateral::print_info() const {
    std::cout << "��������������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}