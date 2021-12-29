#include<iostream>
using namespace std;

struct sum
{
  int num1;
  int num2;
};

int cal(sum x);

int main()
{
   sum x;

   cout << "Enter the number 1 " ;
   cin >> x.num1;

   cout << "Enter the number 2 ";
   cin >> x.num2;

   int h = cal(x);

   cout << h; 

    return 0;
}

int cal(sum x)
{
    return (x.num1+x.num2);
}
