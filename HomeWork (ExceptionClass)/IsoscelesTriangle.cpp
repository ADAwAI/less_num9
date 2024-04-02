#include "IsoscelesTriangle.h"
#include <iostream>
#include <cmath>

IsoscelesTriangle::IsoscelesTriangle(double a, double b)
    : Triangle(a, b, a, (180 - std::acos((2 * a * a - b * b) / (2 * a * a)) * (180 / M_PI)) / 2, std::acos((2 * a * a - b * b) / (2 * a * a))* (180 / M_PI), (180 - std::acos((2 * a * a - b * b) / (2 * a * a)) * (180 / M_PI)) / 2) {
    // ����� ��� ������������� ��������� �������� � ���������� �����, ��� ��� ��� ��� ���������
    // � ������ ������������� �������� ������ Triangle.
}

void IsoscelesTriangle::print_info() const {
    std::cout << "�������������� �����������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << a << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << A << "\n";
}