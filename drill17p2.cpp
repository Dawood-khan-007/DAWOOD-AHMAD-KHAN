#include "std_lib_facilities.h"
// part 2
int main()
{
	// 1 allocated int and initialised with 7 and it's value assigned to p1
	int* p1 = new int(7);
	// 2 printing out
	cout << "p1 :" << p1 << endl;// value of p i.e addr of int(7)
	cout << "*p1 :" << *p1<<endl;// value at p1
	
	//3 allocated memory to array of 7 elements and assigned its value to p2 pointer
	int* p2 = new int[7]{1,2,4,8,16,32,64};
	//4 printing p2 and array it points to 
	cout << "p2 :" << p2 << endl;
	cout << "Array in p2 : " << endl;
	for (int i = 0;i < 7;i++)
		cout << p2[i] << " ";
	cout << endl;
	//10.5 declared int* p3 and initialised with p2
	int* p3 = p2;
	// 6 assigned p1 to p2
	p2 = p1;
	//7 assigned p2 to p3
	p2 = p3;
	//8 
	cout << "p1 :" << p1 << endl;
	cout << "p1 points to :" << *p1 << endl;
	cout << "p2 :" << p2 << endl;
	cout << "p2 points to:" << *p2 << endl;
	//9 deallocating memory from p1 and p2
	delete p1;
	delete[] p2;
	//10 allocated arrays and assigned address to p1
	 p1 = new int[10]{ 1,2,4,8,16,32,64,128,256,512 };
	p2 = new int[10];//10.11 
	//12 copied values in *p1 to *p2
	for (int i = 0;i < 10;i++)
		p2[i] = p1[i];
	cout << "Array p2: \n";
	for (int i = 0;i < 10;i++)
		cout << p2[i] << " ";
	cout<<endl;
	// 13 
	vector<int> v1{ 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	vector<int> v2;
	for (int i = 0;i < 10;i++)
		v2.push_back(v1[i]);
	cout << "vector v2: \n";
	for (int  i : v2) // will run from 0 till end of vector
		cout << i << " ";
	cout << endl;
	return 0;
}