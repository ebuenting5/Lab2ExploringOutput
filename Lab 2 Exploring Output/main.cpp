/*
	Ethan Buenting
	C++ Fall 2022
	Due: Sept. 14, 2022
	Lab 2 Exploring Output
	This lab is a demonstration of my ability to use strings and call/create functions.
*/
//The included functions add the use of strings and text output to the screen
#include <iostream>
#include <string>
//To avoid having to use the std namespace clarification, it is stated here that all namespaces are to be std.
using namespace std;
//Function prototype
void sched();
void checkers();
//Main function with both functions being called
int main() {
	sched();
	checkers();
	return 0;
}
//These are the function definitions
void sched() {
	// The use of strings allows a word or phrase to be assigned to a variable
	const string M = "Monday      ";
	const string Tu = "Tuesday     ";
	const string W = "Wednesday   ";
	const string Th = "Thursday    ";
	const string F = "Friday      ";
	const string Ch = "8:00   Gen Chemistry I 165";
	const string C2 = "12:00  Gen Chemistry I 165";
	const string E = "8:20   Engineering Problems 180";
	const string C = "10:00  C++ 162";
	const string P = "2:30   Classical Physics I 212";
	//Here the string is called by typing in the assigned variable rather than the quotations being used
	cout << M << Ch << endl << M << C << endl << M << P;
	cout << endl << Tu << E << endl << Tu << C << endl << Tu << C2 << endl << Tu << P;
	cout << endl << W << Ch << endl << W << C << endl << W << P;
	cout << endl << Th << E << endl << Th << C << endl << Th << P;
	cout << endl << F << Ch << endl << F << C << endl << F << P;
}
void checkers() {
	const string space = "   *     *     *     *";
	const string spac2 = "*     *     *     *   ";
	cout << endl << space << endl << spac2;
	cout << endl << space << endl << spac2;
	cout << endl << space << endl << spac2;
	cout << endl << space << endl << spac2;
}