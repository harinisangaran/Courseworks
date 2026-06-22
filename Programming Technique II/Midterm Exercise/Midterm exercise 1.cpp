#include <iostream>
#include <string>
using namespace std;

class Line {
	private :
		int m, c;
	public :
		
	Line(int _m=1, int _c=0) {
		m=_m;
		c=_c;
	}
		
	void read() {
		cout << "Please enter the value of m : ";
		cin >> m;
		cout << "Please enter the value of c : ";
		cin >> c;
	}
	
	Line operator-(const Line& right) {
		return Line(m-right.m, c-right.c);
	}
	
	bool operator!=(const Line& right) {
		if ((m*right.m) != -1)
			return true;
		return false;
	}
	
	string toString(int m, int c) {
		string equation = "y=";
		
		if (m==1) {
			if (c>0)
				equation += "x+" + c;
			else if (c<0)
				equation += "x" + c;
			else
				equation += "x";
		}
		else if (m==-1) {
			if (c>0)
				equation += "-x+" + c;
			else if (c<0)
				equation += "-x" + c;
			else
				equation += "-x";
		}
		else {
			if (c>0)
				equation += m + "x+" + c;
			else if (c<0)
				equation += m + "x" + c;
			else
				equation += m + "x";
		}
		return equation;
	}
	
	friend void printLines(Line lines[]);
};

void printLines(Line lines[]) {
	for (int i=0; i<3; i++) {
		cout << "Line " << (i+1) << " slope(m) = " << lines[i].m
			 << ", y-intercept(c) = " << lines[i].c << ", equation : " << lines[i].toString(lines[i].m,lines[i].c) << endl;
	}
}

int main () {
	Line lines[3] = {Line(1,5)};
	cout << "ORIGINAL LINES : " << endl;
	cout << "y=x+5" << endl;
	
	cout << "Set the second line from user input" << endl;
	lines[1].read();
	
	lines[2] = lines[0] - lines[1];
	
	cout << "UPDATED LINES" << endl;
	printLines(lines);
	
	return 0;
}
