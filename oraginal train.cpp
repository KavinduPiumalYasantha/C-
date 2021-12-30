#include<iostream>
#include<string>
using namespace std;

class Train
{
  private:
   int trainID;
   int capacity;
   string startTime;
   string destination;
  public:
   void setTrainDetails(int TID, int CAP, string ST, string DES);
   void displayTrainDestails();
   void setStartTime(); 
};


int main()
{
    Train t[3];

    t[0].setStartTime(1,200,"6:00AM","Kandy");
    t[1].setTrainDetails(2,150,"7.30AM","Galle");
    t[2].setTrainDetails(3,300,"4.00AM","Jaffna");
     
     for(int i = 0; i < 3; i++)
     {
         t[i].displayTrainDestails();
     }
     
 return 0;
}

void Train :: setTrainDetails(int TID, int CAP, string ST, string DES)
{
    trainID = TID;
    capacity = CAP;
    startTime = ST;
    destination = DES;
}

void Train :: displayTrainDestails()
{
    cout << "trainID = "<< trainID ;
    cout << "capacity = "<< capacity ;
    cout << "startTime = "<< startTime ;
    cout << "destination = "<< destination ;
}
