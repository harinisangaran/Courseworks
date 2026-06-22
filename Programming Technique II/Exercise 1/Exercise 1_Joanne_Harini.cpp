// ? EXERCISE 1: INTRODUCTION TO CLASSES AND OBJECTS

// Programming Technique II
// Semester 2, 2023/2024

// Section: 02
// Member 1's Name: JOANNE CHING YIN XUAN    Location: KTDI (i.e. where are you currently located)
// Member 2's Name: _____________    Location: ____________
//
// Date and time of pair programming sessions:
//   _________  (Date, time and estimate duration)
//   _________  (Date, time and estimate duration)
// 


// ? Notes: Choose the debug mode "Console Program" to run the program.

#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

//Task 1:Declare a class model
class Student{
	private:
		string name;
		string code;
		int score;
//Task 2:Default constructor
	public:
		Student()
		{
			name="";
			code="";
			score=0;
		}
//Task 2:Parameterized constructor		
        Student(string studentName,string studentCode,int studentScore)
        {
        	name=studentName;
        	code=studentCode;
        	score=studentScore;
        }
		
//task 4:Accessor
		string getName() const
		{
			return name;
		}
		
		string getCode() const
		{
			return code;
		}
		
		int getScore() const
		{
			return score;
		}
		
//task 5:Accessor
		string getGrade(int s) 
		{
			if (s<0 || s>100) return "Error";
			else if(s>=90) return "A+"; 
			else if (s>=80) return "A"; 
			else if (s>=75) return "A-";
			else if (s>=70) return "B+";
			else if (s>=65) return "B";
			else if (s>=60) return "B-";
			else if (s>=55) return "C+";
			else if (s>=50) return "C";
			else if (s>=45) return "C-";
			else if (s>=40) return "D+";
			else if (s>=35) return "D";
			else if (s>=30) return "D-";
			else return "E";
		}		
		
		double getPointer(string g)
		{
			if (g=="A+" || g=="A") return 4.00; 
			else if (g=="A-") return 3.67;
			else if (g=="B+") return 3.33;
			else if (g=="B") return 3.00;
			else if (g=="B-") return 2.67;
			else if (g=="C+") return 2.33;
			else if (g=="C") return 2.00;
			else if (g=="C-") return 1.67;
			else if (g=="D+") return 1.33;
			else if (g=="D") return 1.00;
			else if (g=="D-") return 0.67;
			else return 0.00;
		}
		
		double getCreditPoint(double p) 
		{
		return p*(code[7]-'0');
		}		
		
//task 4:Mutator
        void setName(string studentName)
        {
        	name=studentName;
		}
		
		void setCode(string studentCode)
		{
			code=studentCode;
		}
		
		void setScore(int studentScore)
		{
			score=studentScore;
		}
		
//task 3:Destructor
		~Student(){
		}
};



int main()
{
	string name;
	string code;
	int score;
	Student s;
	
	cout << "Enter the following data: " << endl;
	cout << "  Subject name => ";
	getline(cin, name);
	s.setName(name);

	cout << "  Subject code => ";
	cin >> code;
	s.setCode(code);

	cout << "  Score earned => ";
	cin >> score;
	s.setScore(score);

	cout << endl
		 << endl;

	cout << "THE RESULT" << endl
		 << endl;

	cout << "Subject Code : " << s.getCode() << endl;
	cout << "Subject Name : " << s.getName() << endl;
	cout << "Credit Hour  : " << s.getCode()[7] << endl;
	cout << "Score Earned : " << s.getScore() << endl;
	cout << "Grade Earned : " << s.getGrade(score) << endl;
	cout << "Grade Point  : " << s.getPointer(s.getGrade(score)) << endl;
	cout << "Point Earned : " << s.getCreditPoint(s.getPointer(s.getGrade(score))) << endl;
	cout << endl;

	system("pause");

	return 0;
}
