#ifndef SQUARE_H
#define SQUARE_H

#include "Quadrilateral.h"

// ����� Square, ����������� ����� Quadrilateral
class Square : public Quadrilateral {
public:
    Square(double side);
    void print_info() const override;
};

#endif // SQUARE_H