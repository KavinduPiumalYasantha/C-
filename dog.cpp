#include <iostream>
#include <string>
using namespace std;

class dog
{
   private:
   int dogID;
   string dogName;
   string owner;

   public:
   void setDogDeatils(int DID, string Dname, string OWNER);
   void dispaly();
   void setownername();
};

int main()
{
   dog f[4];
   f[1].setDogDeatils(25,"Nero","Kavindu");
   f[2].setDogDeatils(15,"Nerfo","Kavinghdu");
   f[3].setDogDeatils(55,"Nehro","Kavingdu");

   f[1].dispaly();
   f[2].dispaly();
   f[3].dispaly();


   return 0;
}

void dog :: setDogDeatils(int DID, string Dname, string OWNER)
{
    dogID = DID;
    dogName = Dname;
    owner = OWNER;
}

void dog :: dispaly()
{
    cout << "Dog ID :" << dogID << endl;
    cout << "Dog Name :" << dogName << endl;
    cout << "Dog Owner :" << owner << endl;
    cout << endl;
    cout << endl;
}

void dog :: setownername()
{

}