/*
#include "iostream"
using namespace std;
*/

#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter student data\n";

	string first_name;	
	cout << "Please enter first name:\n";
	cin >> first_name;

	string last_name;
	cout << "Please enter last name:\n";
	cin >> last_name;

	int age;
	cout << "Please enter age:\n";
	cin >> age;

	cout << "Student data collected.\n";
	cout << first_name <<  " " << last_name << " of age: " << age << "\n";

	return 0;
}