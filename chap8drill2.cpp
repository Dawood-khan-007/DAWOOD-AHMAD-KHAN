 
#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
	// cout << "a: " << a << " b: " << b << endl;
	int temp; 
	temp = a;
	a = b;
	b = temp;
	// cout << "a: " << a << " b: " << b << endl;
}
void swap_r(int& a, int& b)
{
	// cout << "a: " << a << " b: " << b << endl;
	int temp;
	temp = a;  
	a = b;// here a and b points to memory addres
	b = temp;
	// cout << "a: " << a << " b: " << b << endl;
}
/*void swap_cr(const int a, const int  b)//doesn't modify arguments as it is call by constant reference
{
	cout << "a: " << a << " b: " << b << endl;
	int temp; 
	temp = a;
	a = b;
	b = temp;
	cout << "a: " << a << " b: " << b << endl;
}; */
int main(){
	int x = 7, y = 9;
	// cout << "Result of swap_v(x,y). \n";//does not swaps swaps because it simply copies the vallue to function
	// swap_v(x, y);
	// cout<<"value of x "<<x<< "and y is"<<y;
	// x = 7, y = 9;
	// cout << "Result of swap_r(x,y). \n";//swaps beause non-constant refrence referrs to address and reads it nd displays
	//swap_r(x, y);

	cout << "Result of swap_v(7,9). \n";//swaps
	swap_v(7, 9);
	cout<<"value of x "<<x<< " and y is "<<y;

	/*cout << "Result of swap_r(7,9). \n";
	swap_r(7, 9);This will not work as integer 7,9 cannot be allocated memory.need object for reference*/

	// const int cx = 7;
	// const int cy = 9;
	// //swap_r(cx, cy);
	// /*swap_r(cx, cy);  This function will not work as cx and cy are 
	// constants and constants cannot be swapped*/
	
	// double dx = 7.7;
	// double dy = 9.9;
	// cout << "Result of swap_r(dx,dy). \n";
	// swap_v (dx, dy); //The function will only take the integer part as the function is an integer fuction while the variable is a double.
	// cout << "Result of swap_r(7.7,9.9). \n";
	 //swap_v(7.7, 9.9);//The function will only take the integer part as the function is an integer fuction while the variable is a double.

}

