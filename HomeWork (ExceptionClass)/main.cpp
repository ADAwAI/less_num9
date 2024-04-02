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

int main() {
    setlocale(LC_ALL, "Russian");

    std::vector<Figure*> figures;

    // Создание и проверка различных фигур
    try {
        figures.push_back(new RightTriangle(3, 4)); // Прямоугольный треугольник
        std::cout << "Прямоугольный треугольник создан успешно." << std::endl;
    }
    catch (const GeometryException& e) {
        std::cout << "Ошибка при создании прямоугольного треугольника: " << e.what() << std::endl;
    }

    try {
        figures.push_back(new IsoscelesTriangle(5, 6)); // Равнобедренный треугольник
        std::cout << "Равнобедренный треугольник создан успешно." << std::endl;
    }
    catch (const GeometryException& e) {
        std::cout << "Ошибка при создании равнобедренного треугольника: " << e.what() << std::endl;
    }

    // Добавление остальных фигур с аналогичной структурой try-catch

    // Вывод информации о фигурах
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