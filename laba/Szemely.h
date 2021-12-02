#pragma once
#include <string>
#include <iostream>

using namespace std;

class Szemely{
protected:
	string vezetekNev,keresztNev;
	int szuletesiEv;
public:
	void setVezetekNev(string& vn);
	void setKeresztNev(string& kn);
	void setSzuletesiEv(int sze);
	string getVezetekNev();
	string getKeresztNev();
	int getSzuletesiEv();
	void print(ostream &os);
	void Szemely(string v,string k,int e);
};
