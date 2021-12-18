#include<iostream>
#include<string>
#define SIZE 2

using namespace std;


class Employee 
{

    private :

    int empID;
    string empName;

    public:

    Employee(){}

    Employee (int eID, string eName) {

          empID = eID;
          empName =  eName;
     }

     void DisplayEmployee() {

         cout<< "Employee ID :" << empID<<endl;
         cout<< "Employee Name :" << empName <<endl;
     }

    ~Employee() {

        cout<< "Delete Employee" <<endl;

    }
};

class Department {

    private :

        Employee *employee[SIZE];

    public :

         Department() {}
        void addEmployee(Employee *emp1, Employee *emp2) {

            employee[0] = emp1;
            employee[1] = emp2;
        }
        void DisplayDepartment() {

            for(int i=0; i<SIZE; i++) {

                employee[i]->DisplayEmployee();
            }

        }

    ~Department() {

        cout<< "delete department" <<endl;
    }
};

int main() {


    Department *dep = new Department();

    Employee *em1 = new Employee(100, "Kavindu");
    Employee *em2 = new Employee(150, "Sahan");


    dep->addEmployee(em1, em2);
    dep->DisplayDepartment();

    cout<<endl;

    delete dep;

    cout<<endl;

    Employee *em3 = new Employee(110, "ABC");
    Employee *em4 = new Employee(150, "AAA");

    em3->DisplayEmployee();
    em4->DisplayEmployee();




    return 0;

}