
#include <iostream>

using namespace std;

class Parallelogram {

private:

    double a, b;

public:

    void calc_perimeter() //Функция вычисления периметра параллелограмма
    {
        cout << 2 * (a + b);
    }


    //Конструктор с параметром (инициализирующий конструктор)
    Parallelogram(double side_a, double side_b)
    {
        a = side_a;
        b = side_b;

    }

    bool setSides(double a1, double b1)
    {
        if (a1 <= 0 || b1<=0)
        {
            cout << "One of the parameters is incorrect (length <= 0)!";
            return false;
        }
        a = a1;
        b = b1;
    }

};

int main()
{
    double side1, side2;
    cout << "Enter parameters:\n";
    cin >> side1 >> side2;
    Parallelogram Parallelogram1(0, 0);
    if (Parallelogram1.setSides(side1, side2))
        Parallelogram1.calc_perimeter();
    
}


