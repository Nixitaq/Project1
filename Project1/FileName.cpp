#include<iostream>
using namespace std;

class Point // �������� ������ ����!!!
{
private: // ���������� �������
    int x; // ���� �������
    int y; // ���� �������
    char symbol; // ���� �������

public: // ��������� �������
    void Print() // ����� ������ 
    {
        cout << symbol << "-> X: " << x << "\tY: " << y << endl;
    }
    void Init(char t, int _x, int _y) // ����� ������ 
    {
        symbol = t;
        x = _x;
        y = _y;
    }
    //------------------- ������ ��������
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
int main() // �����
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