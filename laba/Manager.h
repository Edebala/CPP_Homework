#pragma once
#include "Alkalmazott.h"

class Manager : public Alkalmazott{
protected:
	string munkakor;
public:
	Alkalmazott(string,string,int,string);
	print(ostream&);
};
