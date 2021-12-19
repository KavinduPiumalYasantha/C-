#include <iostream>
using namespace std;

class student 
{
    private:
    int studenNO;
    int mark1;
    int mark2;
    int mark3;

    public:
    void setstuden(int no);
    void setmarks(int m1,int m2, int m3);
    float cal();

};

void student :: setstuden(int no)
{
  studenNO = no;
}

void student :: setmarks(int m1,int m2, int m3)
{
    mark1 = m1;
    mark2 = m2;
    mark3 = m3;
}

float student ::  cal()
{
    return (mark1+mark2+mark3)/3.0;
}

int main()
{
    student s;

    s.setstuden(02);
    s.setmarks(20,25,41);
    
    cout << s.cal() << endl;

    return 0;
}