#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
#include "date.h"
using namespace std;

class person
{
	public:
		person(const string& = "", const string& = "", 
				const date& = date(0, 0, 0), const string& = "");
		bool operator==(const person &) const;
		friend ostream & operator<<(ostream &, const person &);

	private:
		string	last;
		string	first;
		date	birth;
		string	ssn;
};

#endif
