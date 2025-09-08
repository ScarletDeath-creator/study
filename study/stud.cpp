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

    void SetY(int c)
    {
        if (c >= 0)
        {
            y = c;
        }
    }

    int GetY()
    {
        return y;
    }


    //  ------------------ ������ ���������
    void SetSymbol(char sym) // setter
    {
        symbol = sym;
    }

    char GetSymbol() // getter
    {
        return symbol;
    }

};
int main() // �����
{
    Point a;
    //cout << sizeof(a) << endl; // 12

    a.Init('A', 10, -20);
    a.Print();
    a.SetSymbol('T');
    a.Print();

    a.SetX('X');
    a.Print();

    a.SetY('Y');
    a.Print();


    char c = a.GetSymbol();
    cout << c << endl;

}