#include<iostream>
#include<fstream>
#include"a.h"
using namespace std;

int main()
{
		Rating r;
		float data[10000];
		int output[10000];
		int count=0;
		int j=3;
			
		ifstream inFile("file.in",ios::in);
		ofstream outFile("file.out",ios::out);
		for(int i=0;i<10000;++i)
		{
			if(!inFile.eof())
			{
				inFile >> data[i];
				++count;
			}
		}
		
		r.setK(data[0]);
		r.setRA(data[1]);
	    	r.setRB(data[2]);
		output[0] = r.getRA();
		output[1] = r.getRB();
		for(int i=2;i<(count-3)*2;i=i+2)
		{
			output[i] = r.calRA(output[i-2],r.getK(),data[j],r.calEA(output[i-2],output[i-1]));
			output[i+1] = r.calRB(output[i-1],r.getK(),1-data[j],r.calEB(output[i-2],output[i-1]));
			++j;
		}
		for(int i=0;i<(count-3)*2;i=i+2)
		{
			outFile << output[i] << " " << output[i+1]<< endl;
		}
		return 0;

}
