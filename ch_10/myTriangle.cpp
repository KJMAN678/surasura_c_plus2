#include <iostream>

template <class T> class MyTriangle {
    private:
        T bottom;
        T height;
    public:
        // コンストラクタ
        MyTriangle(T bottom, T height) {
            this->bottom = bottom;
            this->height = height;
        }

        T getArea() {
            return this->bottom * this->height / 2;
        }
};

int main() {
    MyTriangle<int> iObj(10, 20);
    std::cout << "int型の三角形の面積: " << iObj.getArea() << std::endl;

    MyTriangle<double> dObj(30.0, 40.0);
    std::cout << "double型の三角形の面積: " << dObj.getArea() << std::endl;

    return 0;
}