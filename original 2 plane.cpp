#include<iostream> // header file
#include<string> // string header file
using namespace std;

class Plane // declare class
{
    private: // declare private variable
     int planeID;
     string piolet;
     string destination;
     
    public: // declare public method
     Plane();
     Plane(int pid,string pname,string pdestination);
     void setPlaneDetails(int pID,string pName,string pDestination);
     void dispalyPlaneDetails();
     void setnewpilotname();
     string getnewpilotname();
     string getDestination();
};


int main() // main function
{
  Plane p[4];
  
  p[0].setPlaneDetails(1,"Jone","USA"); // set values
  p[1].setPlaneDetails(2,"George","UK"); // set values
  p[2].setPlaneDetails(3,"Henry","USA"); // set values
  p[3].setPlaneDetails(4,"Ronald","UAE"); // set values

  for(int i= 0; i < 4; i++) // call for loop 
  {
      p[i].dispalyPlaneDetails(); // display set values
  }

    for(int i= 0; i < 4; i++)  // call for loop  
  {
      p[i].setnewpilotname(); // assing new piolot name
  } 

  for(int i= 0; i < 4; i++) // call for loop
  {
      p[i].dispalyPlaneDetails(); // display set values
  }


  return 0; // end main function
}

Plane :: Plane() // Default construct called
{
    planeID = 0;
    piolet = "";
    destination = "";
    //cout << "Default construct called" << endl;

}

Plane ::Plane(int pid,string pname,string pdestination) //Overload Plane construct called
{
    planeID = pid;
    piolet = pname;
    destination = pdestination;   
    //cout <<"Overload Plane construct called" <<endl; 
}



void Plane ::setPlaneDetails(int pID,string pName,string pDestination) // funtion implementation
{
    planeID = pID;
    piolet = pName;
    destination = pDestination;
}

void Plane :: dispalyPlaneDetails() // funtion implementation
{
    cout << "planeID = " << planeID <<endl;
    cout << "piolet = " << piolet <<endl;
    cout << "destination = " << destination <<endl;
    cout << endl;
    cout << endl;
}

string Plane :: getDestination() //get values
{
   return destination;
}

void Plane :: setnewpilotname() // funtion implementation
{
    cout << "Input new pilot of plane" << planeID << ":" ;
    cin >> piolet;
}

string Plane :: getnewpilotname() //get values
{
    return piolet;
}