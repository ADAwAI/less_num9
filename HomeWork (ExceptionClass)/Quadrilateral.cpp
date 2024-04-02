#include "Quadrilateral.h"
#include "GeometryException.h"
#include <iostream>

Quadrilateral::Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D)
    : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        throw GeometryException("Все стороны четырёхугольника должны быть больше нуля.");
    }
    if (A + B + C + D != 360) {
        throw GeometryException("Сумма углов четырёхугольника должна быть равна 360 градусам.");
    }
    // Проверка существования четырёхугольника
    if (a + b + c <= d || a + b + d <= c || a + c + d <= b || b + c + d <= a) {
        throw GeometryException("Сумма длин любых трёх сторон должна быть больше длины четвёртой стороны.");
    }
}

void Quadrilateral::print_info() const {
    std::cout << "Четырёхугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}