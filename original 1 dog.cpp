#include<iostream> // header file
#include<string> // string header file
using namespace std;

class Dog // declare class
{
private: // declare private variable
   int dogID;
   string dogName;
   string owner;
public: // declare public method
   Dog();
   Dog(int dogid,string dogname,string dogowner);
   void setDogDetails(int dID,string dName,string downer);
   void displayDogDetails();
   void setOwner();
  
};

int main() // main function
{
    Dog d[3]; 

    d[0].setDogDetails(1, "Zimba","Lucy"); // set values
    d[1].setDogDetails(2, "Timmy","Kate"); // set values
    d[2].setDogDetails(3, "toby","Joel"); // set values

    for(int i= 0; i < 3; i++)   // call for loop
    {
        d[i].displayDogDetails(); // display set values
    }

    for(int i= 0; i < 3; i++) // call for loop
    {
        d[i].setOwner(); // assing new owner name
    }
    
 
    for(int i= 0; i < 3; i++) // call for loop
    {
        d[i].displayDogDetails(); // display new values
    }



    return 0; // end main function
}

Dog :: Dog() // Default construct called
{
    dogID = 0;
    dogName = "";
    owner = "";
    //cout << "Default construct called" << endl; 
}


Dog :: Dog(int dogid,string dogname,string dogowner) // Overload Dog construct called
{
    dogID = dogid;
    dogName = dogname;
    owner = dogowner;  
    //cout <<"Overload Dog construct called" <<endl;
    
}



void Dog :: setDogDetails(int dID,string dName,string downer) // funtion implementation
{
    dogID = dID;
    dogName = dName;
    owner = downer;
}

void Dog :: displayDogDetails() // funtion implementation
{
    cout << " dogID = "<< dogID << endl;
    cout << " dogName = "<< dogName << endl;
    cout << " owner = "<< owner << endl;
    cout << endl;
    cout << endl;
}

void Dog :: setOwner() // set new owner
{
   cout << "Input new owner of dog " << dogID << " : " << endl;
   cin >> owner ; 
}







