// Dakota Wilson
// Program 5- Squaring using for staments
// CS 1044 - Dr.Halverson
// 11-5-18
//This program takes a loop of seventeen integers that are found inside of an
//input file. It then goes through another loop that takes the input given and
//uses it as a Nth term value adding up all of the odd numbers up to that term
//such as N=3 being 1+3+5 to which will then give the user the output in a 
//file of that numbers square. This formats in a way to the file such that the
//number input is printed then tells the user in the file what the square of
//that is all in a sentence like form.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	int Col, Num, Count, Sqr;//Declares all variables as inegers
	
	ifstream infile;
	infile.open("input_program5.txt");
	ofstream outfile;
	outfile.open("output_program5.txt");
	
	outfile << "Student: Dakota Wilson\n\n"; //Prints name to file

	for (Count = 1; Count <=17; Count++)//count loop to 17
	{
		infile >> Num;//Reads from file inputs
		Sqr = 0;//resets squares each loop
			for (Col = 1; Col <= Num + Num; Col += 2)//used to add odd 
				                                     //numbers of Col variable
			{
				Sqr += Col;// finds the square of number input
			}//continues count loop
		outfile << "The square of " << Num << " is " << Sqr << ".";
		//^prints out to file the input number and square in sentence form
		outfile << '\n';
	}//continues to read code
	outfile.close();
	infile.close();
	return 0;
}