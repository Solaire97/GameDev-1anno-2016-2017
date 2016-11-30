#include<iostream>
#include<ctime>
#include <cstdlib> 

using namespace std;
void azzera_campo();
int campo[10][10];
main()
{
	char NG='Y';
	while(NG=='Y' || NG=='y')
	{
		azzera_campo();
		int x=-1;
		int y=-1;
		srand(time(0));
		int a=rand()%10;
		int b=rand()%10;
		campo[5][4]=1;
		while(true)
		{
			cout<<"inserire un valore X da 0 a 9"<<endl;
			cin>>x;
			if(x<0 || x>9)
			{
				while((x<0 || x>9 ))
				{
					cout<<"inserire un valore X da 0 a 9"<<endl;
					cin>>x;
				}
			}
				cout<<"inserire un valore Y da 0 a 9"<<endl;
				cin>>y;
			if(y<0 || y>9)
			{
				while((y<0 || y>9 ))
				{
					cout<<"inserire un valore Y da 0 a 9"<<endl;
					cin>>y;
				}
			}
				system("cls");
			
			if(campo[x][y]==1)
				{
					cout<<"Colpito!"<<endl;
					cout<<"Vuoi rigiocare?(Y/N)";
					cin>>NG;
					if(NG=='N'|| NG=='n')
					{
						break;
					}
					system("cls");
				}
				else
				{
					for(int c=0; c<3; c++)
					{
						for(int d=0; d<3; d++)
						{
							if((a-1+d==x)&&(b-1+c==y))
							{
								cout<<"fuoco"<<endl;
							}
						}
						
					}
					system("pause");
					system("cls");
				}
			
		}
	}
	
	
}

void azzera_campo()
{
	for(int x=0; x<10; x++)
	{
		for(int y=0; y<10; y++)
		{
			campo[x][y]=0;
		}
	}
}
