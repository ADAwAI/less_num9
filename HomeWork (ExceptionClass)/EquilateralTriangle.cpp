#include "EquilateralTriangle.h"
#include <iostream>
#include <cmath>

EquilateralTriangle::EquilateralTriangle(double side)
    : Triangle(side, side, side, 60, 60, 60) {
    if (side <= 0) {
        throw GeometryException("Сторона равностороннего треугольника должна быть больше нуля.");
    }
}

void EquilateralTriangle::print_info() const {
    std::cout << "Равносторонний треугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Углы: A=60 B=60 C=60\n";
}