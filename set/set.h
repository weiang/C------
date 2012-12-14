#ifndef _SET_H_
#define _SET_H_

#include <stddef.h>
#include <iostream>
#include <algorithm>

template <typename obj>
class Set
{
	public:
		Set();
		bool contains(const obj&) const;
		void insert(const obj&);
		void remove(const obj&);
		void print(std::ostream&) const;
		friend std::ostream& operator<<(std::ostream& os, const Set<obj> s)
		{
			s.print(os);
			return os;
		}

	private:
		enum	{LIMIT = 64};
		obj		elems[LIMIT];
		size_t	nelems;
};

#endif		// _SET_H_
