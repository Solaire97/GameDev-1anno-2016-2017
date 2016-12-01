#include<iostream>

using namespace std;

int main()
{
	int c=0;
	int a =0;
	cout<<"inserire un numero che non sia "<< a <<endl;
	while(true)
	{
		cin>>c;
		if(c==a)
		{
			cout<<"Ehi! Non dovevi inserire il numero "<< a <<endl;
			break;
		}
		a++;
		cout<<"inserire un numero diverso da "<< a <<endl;
	}
	return 0;
}
