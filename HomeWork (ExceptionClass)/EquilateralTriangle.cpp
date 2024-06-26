#include "EquilateralTriangle.h"
#include <iostream>
#include <cmath>

EquilateralTriangle::EquilateralTriangle(double side)
    : Triangle(side, side, side, 60, 60, 60) {
    if (side <= 0) {
        throw GeometryException("������� ��������������� ������������ ������ ���� ������ ����.");
    }
}

void EquilateralTriangle::print_info() const {
    std::cout << "�������������� �����������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "����: A=60 B=60 C=60\n";
}