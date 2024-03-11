#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double a, double b)
    : Quadrilateral(a, b, a, b, 90, 90, 90, 90) {}

void Rectangle::print_info() const {
    std::cout << "�������������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "����: A=90 B=90 C=90 D=90\n";
}