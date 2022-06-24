//
//  main.cpp
//  constructor2
//
//  Created by Chairman on 2022/06/03.
//  Copyright © 2022 Chairman. All rights reserved.
//

#include <iostream>
using namespace std;

class Phone {
    string name; //data members
    string sizex;
    
public:
    Phone (string Name, string Size) //parameterized Constructor
    {
        name = Name;
        sizex = Size;
    }
    
public:
    void makecall() // member function
    {
        cout<<"You are making call with"<<name<<endl;
    }
    void sendMessage() //member function
    {
        cout<<"the message is sent from"<<name<<"with size"<<sizex<<endl;
    }
    
};
int main()
{
    Phone P("Iphone","40 inches");
    P.makecall();
    P.sendMessage();
    
    cout<<endl;
    
    Phone G("Samsung","42 inches");
    G.makecall();
    G.sendMessage();
    
    return 0;
}


