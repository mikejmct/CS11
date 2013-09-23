/*		Author: Michael McTernan
		Program: Employee Salary Records
		Date: Aug. 28th, 2013
		Institution: Long Beach City College (LBCC)
*/

#include <iostream>
using namespace std;

int main()
{
	/* Here we define the variables that we will be working with
	*/
	int employee_id;
	double hours_worked;
	double rate_per_hour;
	double salary;

	/* This part of the code will prompt the user to input
	values that will be attributed to the variables defined above through 
	the cin command
	*/
	cout << "Welcome to the Employee Salary Record program." << endl;
	cout << "Please enter your employee ID number: ";
	cin >> employee_id;
	cout << "Please enter the hours worked: ";
	cin >> hours_worked;
	cout << "Please enter the rate of pay per hour: ";
	cin >> rate_per_hour;

	/* Now we define the equation to calculate the salary
	as the salary is a product of the variables input by the user
	*/
	salary = hours_worked * rate_per_hour;
	
	/* After attaining the variable values the below code will print to
	the screen
	*/
	cout << "=================================" << endl;
	cout << "Author: Michael McTernan" << endl;
	cout << "Program: Employlee Salary Record" << endl;
	cout << "Date: August 28th, 2013" << endl;
	cout << "Institution: Long Beach City College, CA." << endl;
	cout << "============================" << endl;

	/* The follow code is reliant on the variables being entered at the promts
	*/
	cout << "Employee ID: " << employee_id << endl;
	cout << "Hours worked: " << hours_worked << endl;
	cout << "Rate per hour: $" << rate_per_hour << endl;
	cout << "Gross salary: $" << salary << endl;

	return 0;
}