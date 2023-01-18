#include <iostream>
using namespace std;
int setbit(int a, int b)
{
	int counta=0, countb=0;
	while(a!=0)
	{
		int bit=a&1;
		if(bit==1)
		{
			counta++;
		}
		a=a>>1;
	}
	while(b!=0)
	{
		int bit=b&1;
		if(bit==1)
		{
			countb++;
		}
		b=b>>1;
	}
	return counta+countb;
}

int main()
{
	int a,b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Total no. of set bits are: "<<setbit(a,b);
}
