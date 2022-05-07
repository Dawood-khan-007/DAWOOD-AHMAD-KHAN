//Dawood
// Part 1 of the drill
#include "std_lib_facilities.h"
// 1.defining a global array
int ga[10] ={1,2,4,8,16,32,64,128,256,512};
//2.
void f(int a[], int n)
{
	//3.a. define local array
	int la[10];
	//3.b.copying values
	for (int i = 0;i < 10;i++)
		la[i] = ga[i];
	//3.c.printing values
	for (int i = 0;i < 10;i++)
		cout<<la[i]<<" ";

	//3.d. pointer
	int* p = new int[n];
	// 3,e,copy argumented arr
	for (int i = 0;i < 10;i++)
		p[i] = a[i];
	// printing
	cout << endl;
	for (int i = 0;i < 10;i++)
		cout << p[i] << " ";
	cout << endl;
	delete[] p;//deallocating
}
int main()
{
	f(ga, 10);//4.a. calling func f with arg (ga,10)'global array'
	int aa[10] = {1,2,6,24,120,720,5040,40320,362880,3628800};//4.b defined an array with 1st 10 factorial values
	f(aa, 10);//calling func with arg of aa array

	
	return 0;
}