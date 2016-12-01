#include<iostream>

using namespace std;

int main()
{
	int diff=-1;
	while(diff<1 || diff>5)
	{
		cout<<"seleziona una difficolta tra:\n 1.Very_Easy\n 2.Easy\n 3.Medium,\n 4.Hard\n 5.Very_Hard\n"<<endl;
		cin>>diff;
		if(diff<1 || diff>5)
		{
			cout<<"La difficolta' non esistente"<<endl;
		}
	}
	switch(diff)
	{
		case 1:
			cout<<"hai scelto la difficolta'  Very Easy"<<endl;
			break;
		case 2:
			cout<<"hai scelto la difficolta'  Easy"<<endl;
			break;
		case 3:
			cout<<"hai scelto la difficolta'  Medium"<<endl;
			break;
		case 4:
			cout<<"hai scelto la difficolta'  Herd"<<endl;
			break;
		case 5:
			cout<<"hai scelto la difficolta'  Very Hard"<<endl;
			break;
	}
	return 0;
}

