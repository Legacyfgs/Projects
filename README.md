# C++
Projects created during College journey using C++ Language

//HelloReduce 

/*
I wrote function named "reduce" that takes two positive integer arguments, call them "num" and "denom", treats them as the numerator and denominator of a fraction, and reduces the fraction. That is to say, each of the two arguments will be modified by dividing it by the greatest common divisor of the two integers. The function returns the value 0 (to indicate failure to reduce) if either of the two arguments is zero or negative, and should return the value 1 otherwise.

Thus, for example, if m and n have been declared to be integer variables in a program, then m = 25; n = 15;
if (reduce(m,n))
cout << m << '/' << n << endl; else cout << "fraction error" << endl; will produce the following output:
5/3
Note that the values of m and n were modified by the function call. Similarly,
m = 63; n = 210; if (reduce (m,n)) cout << m << '/' << n << endl; else
cout << "fraction error" << endl;
will produce the following output: 3/10
Here is another example.
m = 25; n = 0; if (reduce(m,n))
cout << m << '/' << n << endl; else will produce the following output:
cout << "fraction error" << endl;
fraction error
The function reduce is allowed to make calls to other functions that you have written. 
*/

//ParkingCharges

/* 
A parking garage charges a R12.00 minimum fee to park for up to three hours. The garage charges an additional R0.90 per hour for each hour or part thereof in excess of three hours. The maximum charge for any given 24-hour period is R20.00. Assume that no car parks for longer than 24 hours at a time. Write a program that will calculate and print the parking charges for each of 3 customers who parked their cars in this garage yesterday. You should enter the hours parked for each customer. So my  program print the results in a neat tabular format and calculate and print the total of yesterday's receipts. The program use the function calculateCharges to determine the charge for each customer. 
*/

//PayrollSystem

/* 
A company is interested in implementing a payroll system for its employees. You are requested to develop such program in which you must:
• Declare the base class emp.
• Use the function called getInfo(), to get the employee details.
• Declare the derived class salary.
• Declare and define the function getSalary() to get the salary details.
• Define the function calculateNet() to find the net pay.
• Read the number of employees.
• Call the function getInfo(),getSalary() and calculateNet() to each employees. 
*/
