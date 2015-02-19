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
	string pyramid = "";

	for (int i = 1; i <= lines; i++)
	{
		int spaces = lines - i;
		int asterix = 2*i - 1;
		for (int i = 1; i <= spaces; i++)
		{
			pyramid += " ";
		}
		for (int i = 1; i <= asterix; i++)
		{
			pyramid += "*";
		}
    pyramid += "\n";
	}
  return pyramid;
}

string drawTriR90(int lines)
{
	string pyramid = "";
	for (int i = 1; i <= lines; i++)
	{
		int asterix = 2*i-i;
		for (int i = 1; i <= asterix; i++)
		{
			pyramid+= "*";
		}
	pyramid += "\n";
	}

	
	for (int i = 1; i <= lines; i++)
	{
		int asterix = lines - i;
		
		for (int i = 1; i <= asterix; i++)
		{
			pyramid += "*";
		}
		pyramid += "\n";
	}
	
	return pyramid;
}
string drawTriR180(int lines)
{
	string pyramid = "";
	for (int i = lines; i > 0; i--)
	{
		int asterix = 2*i - 1;
		int spaces = lines - i;
		for (int i = 1; i <= spaces; i++)
		{
			pyramid += " ";
		}
		for (int i = 1; i <= asterix; i++)
		{
			pyramid += "*";
		}
    pyramid += "\n";
	}
  return pyramid;
}



int main()
{
	int input;
	//while (input != "q" && input != "Q" && input <= 1 && input >= 20);
	//{
		cout << "Enter the size of your triangle (interger in [1, 20]) \nType Q to quit the program:" << endl;
		

		cin >> input;

		cout << "The triangle with size " << input << " is: \n" << drawTri(input) << endl;

		cout << "The rotation for 90 degrees clockwise: \n" << drawTriR90(input) << endl;
		
		cout << "The rotation for 180 degress clockwise: \n" << drawTriR180(input) << endl;
		

	//}
	system("pause");
	return 0;
}