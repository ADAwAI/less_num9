#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus(double side, double A, double B)
    : Quadrilateral(side, side, side, side, A, B, A, B) {}

void Rhombus::print_info() const {
    std::cout << "����:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << A << " D=" << B << "\n";
}