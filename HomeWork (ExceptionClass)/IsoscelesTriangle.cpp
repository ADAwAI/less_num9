#include "IsoscelesTriangle.h"
#include <iostream>
#include <cmath>

IsoscelesTriangle::IsoscelesTriangle(double a, double b)
    : Triangle(a, b, a, (180 - std::acos((2 * a * a - b * b) / (2 * a * a)) * (180 / M_PI)) / 2, std::acos((2 * a * a - b * b) / (2 * a * a))* (180 / M_PI), (180 - std::acos((2 * a * a - b * b) / (2 * a * a)) * (180 / M_PI)) / 2) {
    // Здесь нет необходимости повторять проверки и вычисления углов, так как они уже выполнены
    // в списке инициализации базового класса Triangle.
}

void IsoscelesTriangle::print_info() const {
    std::cout << "Равнобедренный треугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << a << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << A << "\n";
}