#include <iostream>
#include <cmath>
using namespace std;

double PI = 3.14;

class okrujnost
{
private:
    double r;
public:
    okrujnost(double radius) : r(radius) {}
    double okr()
    {
        return 2 * PI * r;
    }

    double area()
    {
        return PI * r * r;
    }
};

int main()
{
    setlocale(0, "");
    double r;
    cout << "Введите радиус окружности: ";
    cin >> r;

    okrujnost okrujnost(r);
    cout << "Длина окружности: " << okrujnost.okr() << endl;
    cout << "Площадь окружности: " << okrujnost.area() << endl;

    return 0;
}