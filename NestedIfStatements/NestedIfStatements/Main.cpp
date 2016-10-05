#include <iostream>
#include <string>
using namespace std;

/*
ask the user for their username and password.
if the username matches the secret username and
the password matches the secret password display
"Access granted!"
otherwise display "Acess denied..."
*/

int main()
{
	//declare variables
	string sSecUser = "Tyler";
	string sSecPass = "1234";
	string sUserIn, sPassIn; // for capturing input

	cout << "Input Username: ";
	getline(cin, sUserIn);
	cout << "Input Password: ";
	getline(cin, sPassIn);

	//Nested if statement
	/*if (sSecUser == sUserIn)
	{
		if (sSecPass == sPassIn)
		{
			cout << "Access Granted!" << endl;
		}
		else
		{
			cout << "Access Denied" << endl;
		}
	}
	else
	{
		cout << "Access Denied..." << endl;
	}*/

	if ((sSecUser == sUserIn) && (sSecPass == sPassIn))
		cout << "Access Granted..." << endl;
	else
		cout << "Access Denied..." << endl;

	return 0;
}