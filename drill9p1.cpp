//Dawood
#include "std_lib_facilities.h"



struct Date //data type date
{
	Date(int y, int m, int d);

	int y;
	int m;
	int d;
};


Date::Date(int yy, int mm, int dd) //constructor for initialisation
{
	int Minyear(1900), Maxyear(3000);
	if (yy > Maxyear || yy < Minyear)
		cout << " year is not in calender.";
	if (mm > 12 || mm < 1)
		cout << "month not in calender. ";
	if (dd > 31 || dd < 1)
		cout << "day not in  calender." << endl;
	else
	{
		y = yy; m = mm; d = dd;
	}
}


void add_day(Date& dd, int n)
{
	//increase dd by n days
	dd.d += n;
}


ostream& operator<<(ostream& os, const Date& d)
{
	return os << "(" << d.y
		<< "," << d.m
		<< "," << d.d << ")";
}


int main()
{
	Date today( 1976, 8, 28 );
	Date tomorrow( today );

	add_day(tomorrow, 1);

	cout << today << endl;
	cout << tomorrow << endl;

	//invalid date
	Date invalidDate{ 1800, 27, 32 };

	keep_window_open();
	return 0;
}