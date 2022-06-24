//
//  main.cpp
//  contructor
//
//  Created by Chairman on 2022/06/03.
//  Copyright © 2022 Chairman. All rights reserved.
//

#include <iostream>
using namespace std;
class Phone
{ public:
string P_name = "Iphone"; string P_size = "x300";
public:
void make()
{cout<< "I am making call with " << P_name<<endl;
}
void receive(){
cout<< "I am receiving call with " << P_size<<endl; }
};
int main() {
Phone P; P.make(); P.receive(); return 0;
}

