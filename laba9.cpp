
#include <iostream>

using namespace std;

int main()
{
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

        bool setSideA(double a1)
        {
            if (a1 <= 0)
            {
                cout << "The first parameter is incorrect (length <= 0)!";
                return false;
            }
            a = a1;
        }

        bool setSideB(double b1)
        {
            if (b1 <= 0)
            {
                cout << "The second parameter is incorrect (lenght <= 0)!";
                return false;
            }
            b = b1;
        }

    };

    double side1, side2;
    cout << "Enter parameters:\n";
    cin >> side1 >> side2;
    Parallelogram Parallelogram1(0, 0);
    if (Parallelogram1.setSideA(side1) && Parallelogram1.setSideB(side2))
        Parallelogram1.calc_perimeter();
    
}


