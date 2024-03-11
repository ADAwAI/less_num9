#include "IsoscelesTriangle.h"
#include <iostream>
#include <cmath>

IsoscelesTriangle::IsoscelesTriangle(double a, double b)
    : Triangle(a, b, a, 0, 0, 0) {
    // ���� B ����� ��������� ������ �� ������ a � b
    B = std::acos((2 * a * a - b * b) / (2 * a * a)) * (180 / M_PI);
    A = (180 - B) / 2;
    C = A;
}

void IsoscelesTriangle::print_info() const {
    std::cout << "�������������� �����������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << a << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << A << "\n";
}