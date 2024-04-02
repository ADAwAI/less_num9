#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrilateral(a, b, a, b, A, B, A, B) {
    if (a <= 0 || b <= 0) {
        throw GeometryException("Стороны параллелограмма должны быть больше нуля.");
    }
    if (A <= 0 || A >= 180 || B <= 0 || B >= 180) {
        throw GeometryException("Углы параллелограмма должны быть больше 0 и меньше 180 градусов.");
    }
    if (A + B >= 180) {
        throw GeometryException("Сумма двух соседних углов параллелограмма должна быть меньше 180 градусов.");
    }
}

void Parallelogram::print_info() const {
    std::cout << "Параллелограмм:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << A << " D=" << B << "\n";
}