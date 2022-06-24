//
//  main.cpp
//  half pyramid of numbers
//
//  Created by Chairman on 2022/05/17.
//  Copyright © 2022 Chairman. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
