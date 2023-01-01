class Point
{
private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0); // コンストラクタ
    double getX();
    double getY();
    Point operator+(const Point &p); // +演算子のオーバーロード
    Point operator-(const Point &p); // -演算子のオーバーロード
    bool operator==(const Point &p); // ==演算子のオーバーロード
    bool operator!=(const Point &p); // !=演算子のオーバーロード
    friend std::istream &operator>>(std::istream &is, Point &p);
    friend std::ostream &operator<<(std::ostream &os, const Point &p);
};