#include<iostream>
#include<string>

using namespace std;

class Shape{

    protected :

    string name;

    public :

    Shape(string pName)
    {

        cout <<"Shape Called" <<endl;

        name = pName;
    }

    int calcArea() {

        return 0;
    }

};

class Rectangle : public Shape {

    protected :

    int length;
    int width;

    public :

    Rectangle(string pName, int l, int w) 
    : Shape(pName) {

        cout << "Rectangle Called" <<endl;
        length = l;
        width = w;
    }

    int calcArea() {

        return length * width;
    }
};

class Square : public Rectangle {

public :
    Square(string pName, int length)
     : Rectangle(pName, length, length) {

        cout << "Square called" <<endl;
     }

    

};

int main() {


   
    Rectangle rec("Rec", 5, 6);
    cout <<rec.calcArea() <<endl;

    Square sq("SQUARE",4);

    cout<<sq.calcArea() <<endl;
    




    return 0;
}