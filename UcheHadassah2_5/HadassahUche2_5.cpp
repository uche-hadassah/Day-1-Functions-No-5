/*Name:Uche Hadassah
This program prints a specific number of characters per line, from the first(ch1) to the last(ch2), 
depending on the user input*/
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
	if (Ch1 < Ch2)
	{
		printChars(Ch1, Ch2, numPerLine);
	}
	else if (Ch1 > Ch2)//Validation of input when the first character is bigger than the second character
	{
		cout << "Wrong order! I can't print from " << Ch1 << " to " << Ch2 << endl;
	}
	else// when ch1 = ch2
	{
		cout << Ch2 << endl;
	}
	return 0;
}
void printChars(char ch1, char ch2, int numberPerLine)
{
	char character = ch1;
	do
	{
		for (int i = 0; i < numberPerLine; i++)
		{
			if (character <= ch2)
			{
				cout << character << " ";
				character++;
			}
			else
				break;
		}
		cout << endl;
	} while (character < ch2 +1);
}