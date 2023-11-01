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
	printChars('d', 'z', 5);
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