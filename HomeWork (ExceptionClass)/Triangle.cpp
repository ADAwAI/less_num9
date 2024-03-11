#include "Triangle.h"
#include "GeometryException.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : a(a), b(b), c(c), A(A), B(B), C(C) {
    // �������� ��������������� ���� ������
    if (a <= 0 || b <= 0 || c <= 0) {
        throw GeometryException("��� ������� ������������ ������ ���� ������ ����.");
    }

    // �������� ����������� ������������
    if (a + b <= c || a + c <= b || b + c <= a) {
        throw GeometryException("����� ���� ����� ���� ������ ������ ���� ������ ����� ������� �������.");
    }

    // �������� ����� �����
    const double epsilon = 1e-6; // ������ ��� ��������� ������������ �����
    if (std::abs(A + B + C - 180.0) > epsilon) {
        throw GeometryException("����� ����� ������������ ������ ���� ����� 180 ��������.");
    }
}

void Triangle::print_info() const {
    std::cout << "�����������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << "\n";
}