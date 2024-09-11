#include<stdio.h>
#include<iostream>
#include<cmath>


int main() {
    double touble, start, end, step;
    std::cout << "Введите начальное значение x: ";
    std::cin >> start;
    std::cout << "Введите конечное значение x: ";
    std::cin >> end;
    std::cout << "Введите шаг: ";
    std::cin >> step;
    for (double x = start; x <= end; x += step) {
    double y = sin(x);
    std::cout << x << " | " << y << std::endl;
    }
    return 0;
}