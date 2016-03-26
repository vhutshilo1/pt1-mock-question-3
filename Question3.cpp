///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

#include<iostream>
using namespace std;
//class definition
class Fraction
{
private:

	int num;
	int denom;

public:

	Fraction() {};
	Fraction(int n, int d) :num(n),denom(d) {};
	void print() { cout <<num<< "/" << denom; };
	friend bool operator>(const Fraction& fracObj1,const Fraction& fracObj2);//function delclaration
	//Function overloading add()
	/*Fraction add(int iNum, Fraction fracNum)
	{
		Fraction sum;
		sum =iNum + fracNum;
	}*/


};

bool operator>(const Fraction& frac1, const Fraction& frac2)
{
	bool result;
	Fraction fracObj1, fracObj2;
	result = ((fracObj1.num / fracObj1.denom) > (fracObj2.num / fracObj2.denom));
	return result;

}
//Driver Program
int main()
{
	Fraction fract1(1,4), fract2(1,2);
	if (fract1 > fract2)
	{
		cout << "No it's a lie\n" << endl;
	}
	else
		cout << "Yes";


	return 0;

}
