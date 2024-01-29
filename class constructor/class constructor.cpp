#include <iostream> 
using namespace std;

class Point {
private:
    int x;
    int y;

public: 
    Point(int valueX, int valueY) { // constructor
        x = valueX;
        y = valueY;
    }
    int  GetX() { // method receiving the x
        return x;
    }
    void SetX(int valueX) { // method that establishes the x
        x = valueX;
    }
    int  GetY() { // method receiving the y
        return y;
    }
    void SetY(int valueY) { // method that establishes the y
        y = valueY * 2;
    }
    void Print() { // method for displaying the values of x and y
        cout << "X = " << x << "\t Y = " << y << endl << endl;
    }
};

int main() {
    Point a(5, 44);
    a.Print();

    Point b(10, 28);
    b.Print();

    return 0;
}


