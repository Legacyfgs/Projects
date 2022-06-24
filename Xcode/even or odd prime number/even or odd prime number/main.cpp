//
//  main.cpp
//  even or odd prime number
//
//  Created by Chairman on 2022/05/10.
//  Copyright © 2022 Chairman. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter a number: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is even.";
  else
    cout << n << " is odd.";

  return 0;
}






