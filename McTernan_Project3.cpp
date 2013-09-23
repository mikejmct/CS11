/*	Author: Michael McTernan
	Date: Sept. 22nd 2013
	Program: Employee Monthly Paycheck Report
	*****************************************
	Description: this file takes input from the user to determine the
	amounts used to calculate the final paycheck.
	Fixed rates for deductions are:
	Federal Income Tax: 15%
	State Tax: 3.5%
	Social Security Tax: 5.75%
	Medicare/Medicaid Tax: 2.75%
	Pension Plan: 5%
	Health Insurance: $75.00
	*/

#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
	// declare filestream variables
	ofstream out_data;
	ifstream in_data;

	// set input variables
	double gross_income, net_pay;
	string first_name, last_name;

	/* set constants. I decided to store these values as constants and use 
	 them in equations rather than send the calculations to variables.
	*/
	double federal_tax, state_tax, social_security,
		medicare, pension_plan, health_insurance;

	federal_tax = 0.15;
	state_tax = 0.035;
	social_security = 0.0575;
	medicare = 0.0275;
	pension_plan = 0.05;
	health_insurance = 75;

	// open the output file
	out_data.open("payslip.txt");

	// ensure decimals are shown in both terminal and printed file
	out_data << fixed << showpoint;
	cout << fixed << showpoint;

	cout << "Please enter your first name: " << endl;
	cin >> first_name;
	cout << "Please enter your last name: " << endl;
	cin >> last_name;

	cout << "Please enter your gross salary for the month: " << endl;
	cin >> gross_income;

	// now we print the data to the file payslip.txt and to the screen
	out_data << setfill('.');
	out_data << setprecision(2);
	cout << setprecision(2);
	out_data << first_name << " " << last_name << endl;
	cout << first_name << " " << last_name << endl;


	out_data << setfill('.');
	out_data << setw(26) << left << "Gross Amount: " << "$";
	out_data << setfill(' ');
	out_data <<	setw(7) << right << gross_income << endl;
	out_data << setfill('.');

	cout << setfill('.');
	cout << setw(26) << left << "Gross Amount: " << "$";
	cout << setfill(' ');
	cout <<	setw(7) << right << gross_income << endl;
	cout << setfill('.');


	out_data << setw(26) << left << "Federal Tax: " << "$";
	out_data << setfill(' ');
	out_data << setw(7) << right << gross_income * federal_tax << endl;
	out_data << setfill('.');

	cout << setfill('.');
	cout << setw(26) << left << "Federal Tax: " << "$";
	cout << setfill(' ');
	cout << setw(7) << right << gross_income * federal_tax << endl;


	out_data << setw(26) << left << "State Tax: " << "$";
	out_data << setfill(' ');
	out_data << setw(7) << right << gross_income * state_tax << endl;
	out_data << setfill('.');

	cout << setfill('.');
	cout << setw(26) << left << "State Tax: " << "$";
	cout << setfill(' ');
	cout << setw(7) << right << gross_income * state_tax << endl;


	out_data << setw(26) << left << "Social Security Tax: " << "$"; 
	out_data << setfill(' ');
	out_data << setw(7) << right << gross_income * social_security << endl;
	out_data << setfill('.');

	cout << setfill('.');
	cout << setw(26) << left << "Social Security Tax: " << "$"; 
	cout << setfill(' ');
	cout << setw(7) << right << gross_income * social_security << endl;


	out_data << setw(26) << left << "Medicare/Medicaid Tax: " << "$";
	out_data << setfill(' ');
	out_data << setw(7) << right << gross_income * medicare << endl;
	out_data << setfill('.');

	cout << setfill('.');
	cout << setw(26) << left << "Medicare/Medicaid Tax: " << "$";
	cout << setfill(' ');
	cout << setw(7) << right << gross_income * medicare << endl;


	out_data << setw(26) << left << "Pension Plan: " << "$"; 
	out_data << setfill(' ');
	out_data << setw(7) << right << gross_income * pension_plan << endl;
	out_data << setfill('.');

	cout << setfill('.');
	cout << setw(26) << left << "Pension Plan: " << "$"; 
	cout << setfill(' ');
	cout << setw(7) << right << gross_income * pension_plan << endl;


	out_data << setw(26) << left << "Health Insurance: " << "$"; 
	out_data << setfill(' ');
	out_data << setw(7) << right << health_insurance << endl;
	out_data << setfill('.');

	cout << setfill('.');
	cout << setw(26) << left << "Health Insurance: " << "$"; 
	cout << setfill(' ');
	cout << setw(7) << right << health_insurance << endl;


	out_data << setw(26) << left << "Net Pay: " << "$";
	out_data << setfill(' ');
	out_data << setw(7) << right << gross_income - ((gross_income * federal_tax)
		+ (gross_income * state_tax) + (gross_income * social_security) + 
		(gross_income * medicare) + (gross_income * pension_plan) + 
		(health_insurance)) << endl;

	cout << setfill('.');
	cout << setw(26) << left << "Net Pay: " << "$";
	cout << setfill(' ');
	cout << setw(7) << right << gross_income - ((gross_income * federal_tax)
		+ (gross_income * state_tax) + (gross_income * social_security) + 
		(gross_income * medicare) + (gross_income * pension_plan) + 
		(health_insurance)) << endl;

	out_data.close();

	// the data is saved and the file is closed.

	return(0);
}