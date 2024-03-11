#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"

// ����� RightTriangle, ����������� ����� Triangle
class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b);
    void print_info() const override;
};

#endif