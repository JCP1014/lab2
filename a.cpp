#include<iostream>
#include<cmath>
#include<fstream>
#include"a.h"
using namespace std;
void Rating::setK(int read)
{
	K = read;
}
void Rating::setRA(int read)
{
	RA = read;
}
void Rating::setRB(int read)
{
	RB = read;
}
int Rating::getK()
{
	return K;
}
int Rating::getRA()
{
	return RA;
}
int Rating::getRB()
{
	return RB;
}
long double Rating::calEA(int RA,int RB)
{
	int exp;
	exp = (RB-RA)/400;
	E = 1/(1+pow(10,exp));
	return E;
}
long double Rating::calEB(int RA,int RB)
{
	int exp;
	exp = (RA-RB)/400;
	E = 1/(1+pow(10,exp));
	return E;
}
int Rating::calRA(int old,int K,float S,long double E)
{
	RA = old + K*(S-E);
	return RA;
}
int Rating::calRB(int old,int K,float S,long double E)
{
	RB = old + K*(S-E);
	return RB;
}
