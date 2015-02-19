//course: CS215-005
//assignment: Lab Assignment 5
//date: 2/18/2015
//purpose: To print out a triangle with varying sizes depending on user input.
//author: Nicholas Pfister

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string drawTri(int lines)
{
	for (int i = 0; i < lines; i++)
	{
		
	}

}

string drawTriR90(int lines)
{

}

string drawTriR180(int lines)
{

}



int main()
{
	cout << "Enter the size of your triangle (interger in [1, 20]) \nType Q to quit the program:" << endl;
	//n is used to the formula 2*n-1 to caluclate triangle size
	int n;
	cin >> n;

	cout << "The triangle with size " << n << " is: \n" << drawTri(n) << endl;



	system("pause");
	return 0;
}