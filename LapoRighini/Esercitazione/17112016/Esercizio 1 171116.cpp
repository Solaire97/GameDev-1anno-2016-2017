#include<iostream>

using namespace std;

int main()
{
	int score=-1;
	while(score<0 || score>100)
	{
		cout<< "inserisci il tuo score:"<<endl;
		cin>>score;
		if(score<0 || score>100)
		{
		   cout<<"Score errato, inserire uno score da 0 a 100"<<endl; 
		}
	}
	if(score>90 && score<100)
	{
		cout<<"Hai fatto uno score alto"<<endl;
	}
	return 0;
}
