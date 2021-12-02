#pragma once
#include "Szemely.h"

using namespace std;

class Alkalmazott : public Szemely{
protected:
	string munkakor;
public:
	Alkalmazott(string,string,int,string);
	print(ostream&);
};

