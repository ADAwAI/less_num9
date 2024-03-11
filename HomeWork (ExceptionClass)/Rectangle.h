#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"

// ����� Rectangle, ����������� ����� Quadrilateral
class Rectangle : public Quadrilateral {
public:
    Rectangle(double a, double b);
    void print_info() const override;
};

#endif // RECTANGLE_H