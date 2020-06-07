#include <iostream>
#include <fstream>
#include "Date.hpp"
#include "Time.hpp"
#include "Meet.hpp"
#include "BookCommand.h"
#include "Calendar.h"
#include "Command.h"
#include "CommandProcessor.h"

using namespace std;

int main()
{
	fstream meet;

	meet.open("meet.txt", ios::in);
	size_t size = 0;

	meet >> size;

	int n = 0;
	int* arr = new int[size];

	while (!meet.eof())
	{

		if (n < size)
			meet >> arr[n++];

		else
			break;

	}


	for (size_t i = 0; i < n; i++)
	{

		cout << arr[i] << ' ';
	}
	delete[] arr;

	cout << "Welcome to Calendar" << endl;
	string input;
	Calendar calendar;
	CommandProcessor proc;
	

	do
	{
		cout << ">";
		cin >> input;

		proc.execute(input, calendar);
	} while (input != "exit");

	


	return 0;
}