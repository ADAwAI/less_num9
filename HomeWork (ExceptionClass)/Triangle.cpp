#include "Triangle.h"
#include "GeometryException.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : a(a), b(b), c(c), A(A), B(B), C(C) {
    // Проверка положительности длин сторон
    if (a <= 0 || b <= 0 || c <= 0) {
        throw GeometryException("Все стороны треугольника должны быть больше нуля.");
    }

    // Проверка неравенства треугольника
    if (a + b <= c || a + c <= b || b + c <= a) {
        throw GeometryException("Сумма длин любых двух сторон должна быть больше длины третьей стороны.");
    }

    // Проверка суммы углов
    const double epsilon = 1e-6; // Допуск для сравнения вещественных чисел
    if (std::abs(A + B + C - 180.0) > epsilon) {
        throw GeometryException("Сумма углов треугольника должна быть равна 180 градусам.");
    }
}

void Triangle::print_info() const {
    std::cout << "Треугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
}