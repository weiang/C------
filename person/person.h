#ifndef _PERSON_H_
#define _PERSON_H_

#include "date.h"
class person
{
	public:
		person();
		person(const char* = "", const char* = "", const date& = date(0, 0, 0), const char* = "");
		person(const person&);
		~person();
		person& operator=(const person&);
		bool operator==(const person&) const;
		bool operator<(const person&) const;
		friend ostream &operator<<(ostream&, const person&);

	private:
		char	*last;
		char	*first;
		date	birth;
		char	*ssn;
};

#endif		// _PERSON_H_
