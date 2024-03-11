#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Quadrilateral.h"

// ����� Rhombus, ����������� ����� Quadrilateral
class Rhombus : public Quadrilateral {
public:
    Rhombus(double side, double A, double B);
    void print_info() const override;
};

#endif