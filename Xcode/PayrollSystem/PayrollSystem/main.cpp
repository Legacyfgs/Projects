//
//  main.cpp
//  PayrollSystem
//
//  Created by Chairman on 2022/04/18.
//  Copyright © 2022 Chairman. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


//Declare the base class emp.
class emp{
private:
    string name;
    int Id;
    string phone;
public:
    //Use the function called getInfo(), to get the employee details.
    void getInfo(){
        cout<<"Enter the employee name: legacy";
        getline(cin,name);
        getline(cin,name);
        cout<<"Enter the employee Id: ";
        cin>>Id;
        cout<<"Enter the employee phone: ";
        getline(cin,phone);
        getline(cin,phone);
    }
    //Constructor
    emp (){
    }
    //destructor
    ~emp (){}
};


// Declare the derived class salary.
class salary: public emp{//single inheritance
private:
    float salaryAmount;
     
public:
    //Constructor
    salary (){
    }
    //destructor
    ~salary (){}
    //Declare and define the function getSalary() to get the salary details.
    void getSalary(){
        cout<<"Enter the salary: ";
        cin>>salaryAmount;
    }
    // Define the function calculateNet() to find the net pay.
    float calculateNet(){
        float tax=0.06*salaryAmount;
        return salaryAmount-tax;
    }
};


//The start point of the program
int main (){
    int number;
    //  Read the number of employees.
    cout<<"Enter the number of employees: ";
    cin>>number;
    for(int i=0;i<number;i++){
        salary salaryEmployee;
        //Call the function getInfo(),getSalary() and calculateNet() to each employees.
        salaryEmployee.getInfo();
        salaryEmployee.getSalary();
        cout<<"\nThe net pay: "<<salaryEmployee.calculateNet()<<"\n\n";
    }
    system("pause");
    return 0;
}
