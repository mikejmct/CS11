/*	Author: Michael McTernan
	Date: Sept. 13th 2013
	Program: Student Grading System
	Description: this program takes student scores as input, computes the total 
	and average then assigns a lettered grade, "A" students recieve an output 
	congratulating them and F students recieve a warning.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Here we define the variables
	int id, total, score1, score2, score3;
	double grade_average = 0;
	string first_name, last_name, letter_grade;

	// Here we take student data to assign to variables where required
	cout << "Welcome to the Student Grading System" << endl;
	cout << "Please enter your student ID number: ";
	cin >> id;
	cout << "Please enter your first name: ";
	cin >> first_name;
	cout << "Please enter your last name: ";
	cin >> last_name;

	// The student enters their score data and we assign it to variables
	cout << "Please enter your grade for CS 11: ";
	cin >> score1;
	cout << "Please enter your grade for CS 12: ";
	cin >> score2;
	cout << "Please enter your score for CS 21: ";
	cin >> score3;

	// These two equations calculate the total and average scores
	total = score1 + score2 + score3;
	grade_average = total/3;

	// This is the informational message showing the program details
	cout << "========================================" << endl;
	cout << "Student Grading System (SGS)" << endl;
	cout << "Long Beach City College" << endl;
	cout << "Author: Michael McTernan" << endl;
	cout << "Sept. 13th 2013" << endl;
	cout << "========================================" << endl;

	// Here we print the available information so far
	cout << "Student ID: " << id << endl;
	cout << "First Name: " << first_name << endl;
	cout << "Last Name: " << last_name << endl;
	cout << "Total: " << total << endl;
	cout << "Average: " << grade_average << "%" << endl;

	// This if statement defines the letter grade and prints
	// any comments the student recieves from the system
	if (grade_average >= 90)
	{
		cout << "Grade: A" << endl;
		cout << "Congratulations on your excellent result" << endl;
	}
	else if ((grade_average < 90) && (grade_average >= 80))
	{
		cout << "Grade: B" << endl;
	}
	else if ((grade_average < 80) && (grade_average >= 70))
	{
		cout << "Grade: C" << endl;
	}
	else if ((grade_average < 70) && (grade_average >= 60))
	{
		cout << "Grade: D" << endl;
	}
	else if (grade_average < 60)
	{
		cout << "Grade: F" << endl;
		cout << "Warning! You need to study more!" << endl;
	}

	cout << "========================================" << endl;

	return 0;
}