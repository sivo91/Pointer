 
#include <iostream>
#include <string>
#include <cmath> 
#include <vector>
#include <iomanip>
#include <cstdlib> 
#include <ctime> 
#include <cmath> 

using namespace std;



int main() 
{
	// pointer int must point to address of int , same data type !!!

	int num = 10;
	int* p;       // address of pointer somewhere
	p = nullptr;  // init p to 0
	p = &num;

	// OR in one line      int *pointer = &num;
	
	cout << "num value , output => " << num << endl;     // output 10
	cout << "num address , output => " << &num << endl;  // output 000000E9AAF4FAB4

	// p = &num if output is p , then show address of num 
	cout << " p ==>> p = &num is pointing to num address , output => " << p << endl;  //  000000E9AAF4FAB4

	// p = &num if output *p , then show value of num
	cout << " *p ==>> p = &num show value of num / p = &num , output => " << *p << endl;  // 10

	string name = "peter";
	string* pointer = &name;

	cout << " value of name " << name << endl; // peter
	cout << " value of pointer pointing to name , output => " << *pointer << endl; // peter

	name = "Florida";
	cout << " name is change to Florida , output => " << endl;

	cout << " value of name , output => " << name << endl; // Florida
	cout << " value of pointer pointing to name , output => " << *pointer << endl; // Florida

	*pointer = "California";
	cout << " *pointer = 'California' " << endl;

	cout << " name is changed to California , output => " << name << endl;
	cout <<  " *pointer is changed to California , output => " << *pointer << endl;

	vector<string> names { "me", "you", "he" };

	cout << " names.at(0) => " <<  names.at(0) << endl;
	*pointer = names.at(1);
	cout << " *pointer = names.at(1) , output =>" << * pointer << endl;
	  
	return 0;
}
