#include "std_lib_facilities.h"
// 4 function prints arra10 to os
void print_array10(ostream& os, int* a)
{
	for (int i = 0;i < 10; i++)
		os << a[i] << " ";
	cout << endl;
}
// 7 function thats prints values to os having n elements
void print_array(ostream& os, int* a,int n)
{
	for (int i = 0;i < n; i++)
		os << a[i] << " ";
	cout << endl;
}
//  10 function prints values to os having n elements
void print_vector(ostream& os, vector <int>& v )
{
	for (int i :v)
		os << i << " ";
	cout << endl;
}
// part 1
int main()
{
	// 1. allocated an array using new
	int* tenints = new int[10] {1,2,3,4,5,6,7,8,9,10};
	// 2 .printing values using cout
	for (int i = 0;i < 10;i++)
		cout << tenints[i] << " "; 
	cout << endl;
	//  3 .deallocating array tenints
	delete[] tenints;
	//  5 .allocated an array initialised with values 100 etc and printing it with function
	int* tenints2 = new int[10]{ 100,101,102,103,104,105,106,107,108,109 };
	print_array10(cout, tenints2);
	delete[] tenints2;
	// 6. array of 11 ints and printed it using function
	int* elevenints = new int[11]{ 100,101,102,103,104,105,106,107,108,109,110 };
	for (int i = 0;i < 11;i++)
		cout << elevenints[i] << " ";
	cout << endl;
	delete[] elevenints;
	// 8 .20 element initialised
	int* twentyelements = new int[20]{ 100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119 };
	print_array(cout, twentyelements, 20);
	delete[] twentyelements;
	// ----------------------------------------------
	cout << "welcome to vector part :\n";
	// 10. created vector and reserved min of 10 space however it's not necessary to mention
	vector <int> v1;
	//v1.reserve(10);
	v1 = { 100,101,102,103,104,105,106,107,108,109 };
	print_vector(cout, v1);

	vector <int> v2;
	v2 = { 100,101,102,103,104,105,106,107,108,109,110 };
	print_vector(cout, v2);

	vector <int> v3;
	v3 = { 100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119 };
	print_vector(cout, v3);

	return 0;
}