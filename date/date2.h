#ifndef _DATE2_H_
#define _DATE2_H_

typedef struct DP dp;

class date
{
	public:
		date(int, int, int);
		~date();
		char *format(char *) const;
		int compare(const date &) const;
		
	private:
		dp *p;		
		static const char *month_text[13];
};

#endif
