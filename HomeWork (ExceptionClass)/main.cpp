#include <iostream>
#include <string>
#include <cmath>
#include <vector>
//using namespace std;

// ����������� ������������ ������ �������
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "GeometryException.h"

int main() {
    setlocale(LC_ALL, "Russian");

    std::vector<Figure*> figures;

    // �������� � �������� ��������� �����
    try {
        figures.push_back(new RightTriangle(3, 4)); // ������������� �����������
        std::cout << "������������� ����������� ������ �������." << std::endl;
    }
    catch (const GeometryException& e) {
        std::cout << "������ ��� �������� �������������� ������������: " << e.what() << std::endl;
    }

    try {
        figures.push_back(new IsoscelesTriangle(5, 6)); // �������������� �����������
        std::cout << "�������������� ����������� ������ �������." << std::endl;
    }
    catch (const GeometryException& e) {
        std::cout << "������ ��� �������� ��������������� ������������: " << e.what() << std::endl;
    }

    // ���������� ��������� ����� � ����������� ���������� try-catch

    // ����� ���������� � �������
    for (Figure* fig : figures) {
        fig->print_info();
        std::cout << std::endl;
    }

    // ������� ��������
    for (Figure* fig : figures) {
        delete fig;
    }

    return 0;
}