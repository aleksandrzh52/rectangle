#include <iostream>
//обьявим класс прямоугольник
class Rectangle{
//зададим приватные поля длины и высоты
private:
    int height;
    int width;

public:
//зададим параметры функции
    Rectangle(int height, int width){
        this->height = height;
        this->width = width;
    }
//обьявим функцию площадь
    int getArea() {
        return height * width;
    }
//и функцию периметр
    int getPerimeter(){
        return (2*(height+width));
    }
};

int main() {

//обьявим переменные
    int height = 5;
    int width = 8;
//условие
    if (height >= 0 & width >= 0){
        Rectangle rectangle(height,width);
//и вывод
        std::cout << "Area - " << rectangle.getArea();
        std::cout << "\nPerimeter - " << rectangle.getPerimeter();
}
    return 0;
}
