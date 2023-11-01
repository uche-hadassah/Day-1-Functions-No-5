/*Write a function that takes two characters ch1 and ch2 as parameters and prints all 
characters between ch1 and ch2, with a specified number of characters per line. Use 
the following function header:
void printChars(char ch1, char ch2, int numberPerLine)
For example printChars(‘d’, ‘z’, 10) will print 10 characters per line from ‘d’ to ‘z’
(excluding ‘d’ and ‘z’), separated by exactly one space.
(You may assume that ch1< ch2 in the ASCII)*/
#include<iostream>
using namespace std;
void printChars(char ch1, char ch2, int numberPerLine);
int main()
{
	char Ch1, Ch2;
	int numPerLine;
	cout << "Enter the first character:";
	cin >> Ch1;
	cout << "Enter the second character:";
	cin >> Ch2;
	cout << "Enter how many characters you want to display per line:";
	cin >> numPerLine;
	printChars(Ch1, Ch2, numPerLine);
	return 0;
}
void printChars(char ch1, char ch2, int numberPerLine)
{
	char character = ch1;
	while(character <= ch2)
	{
		for (int i = 0; i < numberPerLine; i++)
		{

			cout << character << " ";
			character++;
		
		}
		cout << endl;
		
	}
}