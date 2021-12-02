#include "Szemely.h"

void Szemely::print(ostream &os){
	os<<vezetekNev<<' '
		<<keresztNev<<':'
		<<szuletesiEv<<end;
}

void Szemely::setVezetekNev
	(string& vn):vezetekNev{vn}{}

void Szemely::setKeresztNev
	(string& kn):keresztNev{kn}{}

void Szemely::setSzuletesiEv
	(int sze):szuletesiEv(sze){}

void Szemely::getVezetekNev(){
	return vezetekNev;}

void Szemely::getKeresztNev(){
	return keresztNev;}

void Szemely::getSzuletesiEv(){
	return szuletesiEv;}


void Szemely::Szemely
	(string v,string k,int e):
	vezetekNev{v},
	keresztNev{k},
	szuletesiEv{e}{}
