#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include "Triangle.h"

// ����� EquilateralTriangle, ����������� ����� Triangle
class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side);
    void print_info() const override;
};

#endif