#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

struct Date
{
	Date(int y, int m, int d);

	void add_day(int n);

	int y, m, d;
};

// -----------------------------------------------------------------------------

Date::Date(int yy, int mm, int dd)
{
	int yearMin(1900), yearMax(3000);
	if (yy > yearMax || yy < yearMin)
		cout << "year is not in calender.";
	if (mm > 12 || mm < 1)
		cout << "month is not in calender.";
	if (dd > 31 || dd < 1)
		cout << "day is not in calender." << endl;
	else
	{
		y = yy; m = mm; d = dd;
	}
}

// -----------------------------------------------------------------------------

void Date::add_day(int n)
{
	//if d += n is more than 31, make it 1, else return d
	if (d += n > 31)
	{
		d = 1;
		++m;
	}
}

// -----------------------------------------------------------------------------

ostream& operator<<(ostream& os, const Date& d)
{
	return os << "(" << d.y
		<< "," << d.m
		<< "," << d.d << ")";
}

// -----------------------------------------------------------------------------

int main()
{
	Date today( 1978, 6, 31 );
	Date tomorrow( today );

	tomorrow.add_day(1);

	cout << today << endl;
	cout << tomorrow << endl;

	//invalid date nem jo
	Date invalidDate{ 1300, 27, -4 };

	keep_window_open();
	return 0;
}