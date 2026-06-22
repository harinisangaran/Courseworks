// ? EXERCISE 2: CLASS AND OBJECT MANIPULATIONS

// Programming Technique II
// Semester 2, 2021/2022

// Section: 01
// Member 1's Name: HARINI A/P SANGARAN    Location: ____________ (i.e. where are you currently located)
// Member 2's Name: _____________    Location: ____________
//
// Date and time of pair programming sessions:
//   _________  (Date, time and estimate duration)
//   _________  (Date, time and estimate duration)
//
// Video link:
//   _________

// ? Notes: Choose the debug mode "Console Program" to run the program.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define MAX_SUBJECT_COUNT 10

class Subject
{
private:
	string name;
	string code;
	int score;
	int lowerScore;

public:
	Subject();
	int credit() const;
	string grade() const;
	double point() const;
	void print() const;
	double getPoint(string);
	void getPrint(string, string, int);
	void operator<(Subject& a, Subject& b);
	
// The definition of the getter for the 'grade()' is fully given
string Subject::grade() const
{
	if (score >= 90)
		return "A+";
	if (score >= 80)
		return "A";
	if (score >= 75)
		return "A-";
	if (score >= 70)
		return "B+";
	if (score >= 65)
		return "B";
	if (score >= 60)
		return "B-";
	if (score >= 55)
		return "C+";
	if (score >= 50)
		return "C";
	if (score >= 45)
		return "C-";
	if (score >= 40)
		return "D+";
	if (score >= 35)
		return "D";
	if (score >= 30)
		return "D-";
	return "E";
}
	
//Task 1 : Accessor for points
double Subject::getPoint(string grade) {
	if ((grade == "A+") || (grade == "A"))
		return 4.00;
	if (grade == "A-")
		return 3.67;
	if (grade == "B+")
		return 3.33;
	if (grade == "B")
		return 3.00;
	if (grade == "B-")
		return 2.67;
	if (grade == "C+")
		return 2.33;
	if (grade == "C")
		return 2.00;
	if (grade == "C-")
		return 1.67;
	if (grade == "D+")
		return 1.33;
	if (grade == "D")
		return 1.00;
	if (grade == "D-")
		return 0.67;
	return 0.00;
}

// The definition of the default constructor is fully given
Subject::Subject() : name(""), code(""), score(0) {}

// The definition of the getter for the 'credit()' is fully given
int Subject::credit() const { return code[7] - '0'; }

//Task 2 : Accessor to print
void Subject::getPrint(string code, string name, int score) {
	cout << left << setw(15) << code; 
	cout << left << setw(15) << name;
	cout << left << setw(15) << credit();
	cout << left << setw(15) << score;
	cout << left << setw(15) << grade(score);  
	cout << left << setw(15) << getPoint(grade);
	cout << left << setw(15) << (credit()*getPoint);  
}

//Task 3 : Operator '<'
void Subject::operator<(Subject& a, Subject& b) {
	if a.score < b.score
		lowerScore = a.score;
	lowerScore = b.score;
}

// Define a regular function that read a list of subjects from user input
int readUserInput(Subject subjects[])
{
}

};


int main()
{

	cout << endl
		 << endl
		 << "THE RESULT"
		 << endl
		 << endl;

	// Print the output table header
	cout << left << setw(15) << "Subject Code";
	cout << left << setw(30) << "Subject Name";
	cout << left << setw(10) << "Credit";
	cout << left << setw(10) << "Score";
	cout << left << setw(10) << "Grade";
	cout << left << setw(10) << "Point";
	cout << left << setw(10) << "Sub Total";
	cout << endl
		 << endl;

	cout << endl;
	cout << "TOTAL POINT  : " << endl;
	cout << "TOTAL CREDIT : " << endl;
	cout << "GPA          : " << setprecision(3) << endl;

	cout << endl;
	cout << "LOWEST SUBJECT : " << endl;
	cout << endl;

	system("pause");

	return 0;
}


