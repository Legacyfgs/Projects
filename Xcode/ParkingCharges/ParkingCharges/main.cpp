//
//  main.cpp
//  ParkingCharges
//
//  Created by Chairman on 2022/04/18.
//  Copyright © 2022 Chairman. All rights reserved.
//

#include <iostream>




using namespace std;




float calculateCharges(float customer_time);




int main()

{

  int number = 3;

  float customer_fees[number];

  float customer_times[number];

  int i;

  for(i = 0; i < number; i++)

  {

    cout << "Enter the time of parking of " << i+1 << " customer: ";

    cin >> customer_times[i];

    customer_fees[i] = calculateCharges(customer_times[i]);

  }

  for(i = 0; i < number; i++)

    cout << "Customer's " << i+1 << " fee for " << customer_times[i] << " = " << customer_fees[i] << endl;

  return 0;

}




float calculateCharges(float customer_time)

{

  float amount = 12 + (0.9 * ((int)customer_time - 2));

  if(amount > 20)

    return 20;

  else return amount;

}
