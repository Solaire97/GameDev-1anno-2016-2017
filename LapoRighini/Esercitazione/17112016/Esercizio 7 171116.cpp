#include<iostream>

using namespace std;

int main()
{
	int c=0;
	while(true)
	{
		cout<<"inserire un numero che non sia 5"<<endl;
		cin>>c;
		if(c==5)
		{
			cout<<"Ehi! Non dovevi inserire il numero 5"<<endl;
			break;
		}
	}
	return 0;
}
