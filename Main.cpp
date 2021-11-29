/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Reese Stowell
 */
#include <iostream>
#include "std_lib_facilities.h"

int main()
{
	string operation;
	double num = 0;
	double num2 = 0;
	cout << "Please enter 2 numbers seperated by a space followed by a basic calculator application +, -, *, / ";
	
	while(cin >> num >> num2 >> operation) {			
		double result = 0;
		if(operation=="+")
        { 
            result = num + num2;
			cout << "The sum of "<< num << " and " << num2 << " is " << result << '\n';
        }
		else if (operation=="-")
        {
        	result = num - num2;
			cout << "The difference of "<< num << " and " << num2 << " is " << result << '\n';
        }
		else if (operation=="*")
        {
        	result = num * num2;
			cout << "The product of "<< num << " and " << num2 << " is " << result << '\n';
        }
		else if (operation=="/") 
        {
			if (num2==0) error("cant divide by zero");
			result = num/num2;
			cout << "The quotient of "<< num << " and " << num2 << " is " << result << '\n';
		}
		cout << "Please enter a new opperation ";
	}
}
