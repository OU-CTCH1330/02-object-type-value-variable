/*
#include "iostream"
using namespace std;
*/

#include "std_lib_facilities.h"

int main()
{
/*
	int age;
	// cin >> age;
	cout << age << "\n ";
	cout << 0x1e5 << "\n";
*/

	int class_size = 25;

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

	class_size++;
	cout << "\nStudent data collected.\n";
	cout << first_name +  " " + last_name + " of age: " << age << "\n";
	cout << "New class size is " << class_size << "\n";

	return 0;
}