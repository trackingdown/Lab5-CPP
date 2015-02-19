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
	//string pyramid;
	int space = 0;
	int asterix = 0;

	for (int i = 0; i < lines; i++)
	{
		//pyramid = lines - i;
		for (int i= 0;i < lines; i++)
		{
			cout << " ";
		}


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
	//n is used to the formula 2*n-1 to caluclate triangle size
	int n;
	while (n != "q" && n != "Q" && n <= 1 && n >= 20);
	{
		cout << "Enter the size of your triangle (interger in [1, 20]) \nType Q to quit the program:" << endl;
		

		cin >> n;

		cout << "The triangle with size " << n << " is: \n" << drawTri(n) << endl;

		cout << "The rotation for 90 degrees clockwise: \n" << drawTriR90(n) << endl;

		cout << "The rotation for 180 degress clockwise: \n" << drawTriR180(n) << endl;


	}
	system("pause");
	return 0;
}