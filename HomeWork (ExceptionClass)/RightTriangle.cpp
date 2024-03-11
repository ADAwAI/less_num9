#include "RightTriangle.h"
#include <iostream>
#include <cmath>

RightTriangle::RightTriangle(double a, double b)
    : Triangle(a, b, std::sqrt(a* a + b * b), 0, 0, 90) {
    // ���� A � B ����� ��������� ������ �� ������ a � b
    A = std::atan(b / a) * (180 / M_PI);
    B = 90 - A;
}

void RightTriangle::print_info() const {
    std::cout << "������������� �����������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=90\n";
}