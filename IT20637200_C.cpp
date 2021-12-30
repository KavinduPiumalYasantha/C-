// Student Registration Number : IT20637200

// Name : C.M.K.P.Yasantha

// Paper Version : C

#include<iostream> // Header file
using namespace std;

class Lab // declare class
{
private: // private properties
  int labID;
  int capacity;
   
public: // public Methods
  Lab();
  Lab(int lid,int cap);
  void setLabDetails(int LID,int CAP);
  int getCapacity();
};

int main() // Main Function
{
   Lab l1,l2,l3;
   int capacity; 

   
   l1.setLabDetails(401,60); // set values
   l2.setLabDetails(402,40); // set values
   l3.setLabDetails(403,30); // set values

   cout << "Insert capacity " << endl; // display
   cin >> capacity; // user input

   if(capacity <= l3.getCapacity()) // condition
   {
       cout << "Lab 403"<< endl; // display
   }
   else if (capacity <= l2.getCapacity()) // condition
   {
       cout << "Lab 402" << endl; // display 
   }
   else if (capacity <= l1.getCapacity()) // condition
   {
       cout << "Lab 401" << endl; // display 
   }


    return 0; // End function
}

Lab ::Lab() // Default construct called
{
    labID = 0;
    capacity = 0;    
     //cout << "Default construct called" << endl;
}

Lab ::Lab(int lid,int cap)//Overload Lab construct called
{
    labID = lid;
    capacity = cap;    
    //cout <<"Overload Lab construct called" <<endl;
}


void Lab :: setLabDetails(int LID,int CAP) // Method call
{
    labID = LID;
    capacity = CAP;
}

int Lab :: getCapacity() 
{
  return  capacity;
}


