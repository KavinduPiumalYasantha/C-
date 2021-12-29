#include<iostream>
#include<string>

using namespace std;

class Shape {

    protected :

    string name;

    public :

    Shape(string pName){
        
         name = pName;
        cout << "Shape Called" <<endl;

       
    }

   void print() {

        cout<<"Name :" << name <<endl;
        cout << "Area :" << calcArea() <<endl;
    }

  virtual int calcArea() {

        return 0;
    }

};

class Rectangle : public Shape {

    protected :

    int length;
    int width;


    public :

    Rectangle(string pName, int w, int l) : Shape(pName) {

            cout << "Rectangle Called" <<endl;

            length = l;
            width = w;
    }

     int calcArea() {

         return length * width;
     }

     void print() {

        Shape ::print();
        cout<<"Length :" << length <<endl;
        cout << "Width :" << width <<endl;
    }

};

int main() {


    Rectangle *rec = new Rectangle("Rec1:",4, 5 );
   
   cout<<rec->calcArea() <<endl;
   rec->print();




    return 0;
}