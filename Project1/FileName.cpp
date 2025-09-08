#include<iostream>
using namespace std;

class Point // создание своего ТИПА!!!
{
private: // реализация объекта
    int x; // поле объекта
    int y; // поле объекта
    char symbol; // поле объекта

public: // интерфейс объекта
    void Print() // метод класса 
    {
        cout << symbol << "-> X: " << x << "\tY: " << y << endl;
    }
    void Init(char t, int _x, int _y) // метод класса 
    {
        symbol = t;
        x = _x;
        y = _y;
    }
    //------------------- методы аксесоры
    void SetSymbol(char sym)
    {
        symbol = sym;
    }
    char GetSymbol()
    {
        return symbol;
    }

    void SetX(int a)
    {
        if (a >= 0)
        {
            x = a;
        }
    }
    int GetX()
    {
        return x;
    }
    void SetY(int b)
    {
        if (b >= 0)
        {
            y = b;
        }
    }
    int GetY()
    {
        return y;
    }
};
int main() // клент
{
    Point a, b;
    //cout << sizeof(a) << endl; // 12

    a.Init('A', 10, -20);
    a.Print();

    b.Init('B', 5, 16);
    b.Print();

    a.SetSymbol('T');
    a.Print();

    char c = a.GetSymbol();
    cout << c << endl;
    ///
}