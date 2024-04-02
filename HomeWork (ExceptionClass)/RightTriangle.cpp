#include "RightTriangle.h"
#include <iostream>
#include <cmath>

RightTriangle::RightTriangle(double a, double b)
    : Triangle(a, b, std::sqrt(a* a + b * b),  // стороны
        std::atan(b / a)* (180 / M_PI), // угол A
        90 - (std::atan(b / a) * (180 / M_PI)), // угол B
        90) { // угол C всегда 90
    // Поскольку мы вычисляем и передаем все необходимые параметры в конструктор базового класса Triangle,
    // не нужно выполнять никаких дополнительных вычислений или проверок здесь.
}

void RightTriangle::print_info() const {
    std::cout << "Прямоугольный треугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=90\n";
}