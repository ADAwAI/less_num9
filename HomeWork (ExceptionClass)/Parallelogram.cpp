#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrilateral(a, b, a, b, A, B, A, B) {
    if (a <= 0 || b <= 0) {
        throw GeometryException("������� ��������������� ������ ���� ������ ����.");
    }
    if (A <= 0 || A >= 180 || B <= 0 || B >= 180) {
        throw GeometryException("���� ��������������� ������ ���� ������ 0 � ������ 180 ��������.");
    }
    if (A + B >= 180) {
        throw GeometryException("����� ���� �������� ����� ��������������� ������ ���� ������ 180 ��������.");
    }
}

void Parallelogram::print_info() const {
    std::cout << "��������������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << A << " D=" << B << "\n";
}