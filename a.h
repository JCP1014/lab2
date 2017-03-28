#ifndef A_H
#define A_H
using namespace std;

class Rating
{
	private:
		int K,RA,RB;
		long double E;
	public:
		void setK(int read);
		void setRA(int read);
		void setRB(int read);
		int getK();
		int getRA();
		int getRB();
		long double calEA(int RA,int RB);
		long double calEB(int RA,int RB);
		int calRA(int old,int K,float S,long double E);
		int calRB(int old,int K,float S,long double E);
};
#endif		
