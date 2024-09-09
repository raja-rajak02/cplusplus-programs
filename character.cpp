// C++ program to illustrate some of the
// above mentioned functions

#include <iostream>
using namespace std;
int main()
{
	char grade = 'B';
	cout << "I scored a: " << grade << endl;

	char x = 64, y = 66, z = 71;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	char ch;
	cout << "Enter any character: ";
	cin >> ch;
	cout << "The ASCII Value of " << ch << " is " << int(ch) << endl;

	char chary[12] = "Hello World";

	// checking for isalnum() function
	for (int i = 0; i < 12; i++)
	{
		if (isalnum(chary[i]))
			cout << chary[i] << " is alphanumeric" << endl;
		else
			cout << chary[i] << " is not alphanumeric" << endl;
	}
	cout << endl;

	char ch_alpha[6] = "MNS15";
	for (int i = 0; i < 6; i++)
	{
		if (isalpha(ch_alpha[i]))
			cout << ch_alpha[i] << " is an alphabet" << endl;
		else
			cout << ch_alpha[i] << " is not an alphabet" << endl;
	}
	cout << endl;

	cout << endl;

	return 0;
}
