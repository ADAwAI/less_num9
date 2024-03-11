#include <iostream>
#include <string>
#include <cmath>
#include <vector>
//using namespace std;

// Подключение заголовочных файлов классов
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

// Функция main
int main() {
    setlocale(LC_ALL, "Russian");

    std::vector<Figure*> figures;

    // Попытка создать правильную фигуру
    try {
        figures.push_back(new Triangle(10, 10, 10, 60, 60, 60)); // Равносторонний треугольник, правильные параметры
        std::cout << "Правильная фигура создана." << std::endl;
    }
    catch (const GeometryException& e) {
        std::cout << "Ошибка при создании фигуры: " << e.what() << std::endl;
    }

    // Попытка создать неправильную фигуру
    try {
        figures.push_back(new Triangle(10, 20, 50, 20, 40, 120)); // Неправильные параметры, сумма углов не 180
        std::cout << "Неправильная фигура создана." << std::endl;
    }
    catch (const GeometryException& e) {
        std::cout << "Ошибка при создании фигуры: " << e.what() << std::endl;
    }

    // Вывод информации о правильно созданных фигурах
    for (Figure* fig : figures) {
        fig->print_info();
        std::cout << std::endl;
    }

    // Очистка ресурсов
    for (Figure* fig : figures) {
        delete fig;
    }

    return 0;
}