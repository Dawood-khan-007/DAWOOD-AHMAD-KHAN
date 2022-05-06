#include "std_lib_facilities.h"
enum class Month
{
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

// -----------------------------------------------------------------------------

class Date
{
public:
	Date(int y, Month m, int d);

	void add_day(int n);
	void add_month(int n);
	void add_year(int n);

	Month month() const { return m; }
	int day() const { return d; }
	int year() const { return y; }

private:
	int y, d;
	Month m;
};

// -----------------------------------------------------------------------------

Date::Date(int yy, Month mm, int dd)
{
	int yearMin(1900), yearMax(3000);
	if (yy > yearMax || yy < yearMin)
		cout << "year is not in calender.";
	if (int(mm) > 12 || int(mm) < 1)
		cout << "month is not in calender.";
	if (dd > 31 || dd < 1)
		cout << "day  is not in calender." << endl;
	else
	{
		y = yy; m = mm; d = dd;
	}
}


void Date::add_day(int n)
{
	//wrap days and months + increase year if necessary
	//you should see what I wrote the first time around...talk about nightmare code
	if ((d += n) > 31)
	{
		d = 1;
		int nextM = int(m) + 1;
		if (nextM > 12)
		{
			add_month(1);
		}
		else
			m = Month(nextM);
	}
}


void Date::add_month(int n)
{
	int nextM = 0;
	if ((nextM = int(m) + n) > 12)
	{
		m = Month::jan;
		add_year(1);
	}
	else
		m = Month(nextM);
}

// -----------------------------------------------------------------------------

void Date::add_year(int n)
{
	y += n;
	if (y > 3000)
	{
		cout << "szia! It is not the year 3000; " << endl;
		y -= n;
	}
}

// -----------------------------------------------------------------------------

ostream& operator<<(ostream& os, const Date& d) // makes easy to cout date with having to repeat stuff again and again
{
	return os << "(" << d.year()
		<< "," << int(d.month())
		<< "," << d.day() << ")";
}

// -----------------------------------------------------------------------------

int main()
{
	Date today(1978, Month::jan, 30);
	Date tomorrow(today);

	tomorrow.add_day(1);
	cout << tomorrow << endl;
	tomorrow.add_month(1);
	cout << tomorrow << endl;
	tomorrow.add_year(5);
	cout << tomorrow << endl;


	cout << "\n" << today << endl;
	cout << tomorrow << endl;

	//invalid date
	Date invalidDate{ 1300, Month::dec, -4 };

	keep_window_open();
	return 0;
}
