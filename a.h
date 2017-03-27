#include<iostream>
#include<fstream>
#include<cmath>
#ifndef A_H
#define A_H
using namespace std;

class rating
{
	private:
		int K,RA,RB;
		long double E;
	public:
		void setK(int read)
		{
			K = read;
		}
		void setRA(int read)
		{
			RA = read;		
		}
		void setRB(int read)
		{
			RB = read;
		}
		int getK()
		{
			return K;
		}
		int getRA()
		{
			return RA;
		}
		int getRB()
		{
			return RB;
		}
		float calEA(int RA,int RB)
		{
			int exp;
			exp = (RB-RA)/400;
			E = 1/(1+pow(10,exp));
			return E;
		}		
		float calEB(int RA,int RB)
		{
			int exp;
			exp = (RA-RB)/400;
			E = 1/(1+pow(10,exp));
			return E;
		}
		int calRA(int old,int K,float S,long double E)
		{
			RA = old + K*(S-E);
			return RA;
		}
		int calRB(int old,int K,float S,long double E)
		{
			RB = old + K*(S-E);
			return RB;
		}
};
#endif		
