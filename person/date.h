#ifndef _DATE_H_
#define _DATE_H_

#include <iosfwd>
using std::ostream;

class date
{
	public:
		date(int ,int , int);
		bool operator==(const date &) const;
		bool operator!=(const date &) const;
		bool operator< (const date &) const;
		char* format(char *) const;
		int compare(const date &) const;
		friend ostream &operator<<(ostream &, const date &);
	private:
		int month;
		int day;
		int year;

		static const char *month_text[13];
};

inline bool date::operator==(const date &d) const
{
	return compare(d);
}

inline bool date::operator!=(const date &d) const
{
	return (compare(d) != 0);
}

inline bool date::operator< (const date &d) const
{
	return (compare(d) < 0);
}

#endif
