#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class PantherII
{
	int vita;
	int carburante;
	int munizioni;
	public:
	PantherII()
	{
		vita=100;
		carburante=100;
		munizioni=100;
	}
	void Pattugliamento(int& punti)
	{
		
		if(isOperativo())
		{
			int randp=(rand()%3)+2;
			vita-=(randp*2);
			carburante-=(randp*8);
			munizioni-=(randp*2);
			punti+=1;
			return;
		}
		else
		{
			return;
		}
		
		
	}
	void Attacco_Posizione_Nemica(int& punti)
	{
		
		if(isOperativo())
		{
			int randa=(rand()%3)+2;
			vita-=(randa*7);
			carburante-=(randa*3);
			munizioni-=(randa*7);
			punti+=2;
			
			return;
		}
		else
		{
			return;
		}
		
	}
	void Rifornimento_e_Riparazione(int& punti)
	{
		
		if(isOperativo())
		{
			int randr=(rand()%3)+2;
			vita+=(randr*5);
			if (vita>100)
			{
				vita=100;
			}
			carburante+=(randr*5);
			if (carburante>100)
			{
				carburante=100;
			}
			munizioni+=(randr*5);
			if (munizioni>100)
			{
				munizioni=100;
			}
			return;
		}
		else
		{
			return;
		}
		
	}
	bool isOperativo()
	{
		return (vita>0&&carburante>0&&munizioni>0);
	}
	public:
	void stato_carro()
	{
		cout<<"\noperativo: "<<isOperativo()<<endl;
		cout<<"\nvita: "<<vita<<endl;
		cout<<"\ncarburante: "<<carburante<<endl;
		cout<<"\nmunizioni: "<<munizioni<<endl;
		return;
	}
};
bool conta_carri(PantherII team[5])
{
	int carri=0;
	for(int a=0; a<5; a++)
	{
		if(team[a].isOperativo())
		{
			carri++;
		}
		
	}
	if(carri==0)
	{
		return(true);
	}
	else
	{
		return(false);
	}
}

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));
	PantherII team[5];
	int punti=0;
	cout<<"Buonasera Comandante, i suoi carri PantherII sono operativi e pronti a procedere nella campagna di conquista delle Ardenne. \n Le regole sono semplici:\n1)Puo' dare un solo ordine a tutti e 5 i carri.\n2)Deve arrivare a 100 punti vittoria cosi' da vincere la campagna.\n3)Se rifornisce i suoi carri perde punti vittoria per inattivita'\n4)se perde tutti i carri la campagna fallisce.\n"<<endl;
	cout<<"Questi sono i vostri carri: "<<endl;
	for(int a=0; a<5; a++)
	{
		cout<<"carro num "<<a+1<<endl;
		team[a].stato_carro();
		cout<<"-------------------------------------------------------------------------------"<<endl;
	}
	cout<<"Buona fortuna Comandante\n\n"<<endl;
	system("pause");
	int choice=0;
	while(!conta_carri(team))
	{
		system("cls");
		cout<<"Quali sono i suoi ordini Comandante?\n"<<endl;
		cout<<"1)Pattugliamento"<<endl;
		cout<<"2)Attacca la posizione nemica"<<endl;
		cout<<"3)Rifornimento e riparazione\n"<<endl;
		while(choice<1 || choice>3)
		{
			cin>>choice;
		}
		system("cls");
		switch(choice)
		{
			case 1:
					for(int a=0; a<5; a++)
					{
						team[a].Pattugliamento(punti);
					}
					cout<<"il suo punteggio e' "<<punti<<endl;
					cout<<"Lo stato dei suo carri Comandante:"<<endl;
					for(int a=0; a<5; a++)
					{
						cout<<"carro num "<<a+1<<endl;
						team[a].stato_carro();
						cout<<"-------------------------------------------------------------------------------"<<endl;
					}
					system("pause");
					choice=0;
					break;
			case 2:
					for(int a=0; a<5; a++)
					{
						team[a].Attacco_Posizione_Nemica(punti);
					}
					cout<<"il suo punteggio e' "<<punti<<endl;
					cout<<"Lo stato dei suo carri Comandante:"<<endl;
					for(int a=0; a<5; a++)
					{
						cout<<"carro num "<<a+1<<endl;
						team[a].stato_carro();
						cout<<"-------------------------------------------------------------------------------"<<endl;
					}
					system("pause");
					choice=0;
					break;
			case 3: 
					for(int a=0; a<5; a++)
					{
						team[a].Rifornimento_e_Riparazione(punti);
					}
					punti-=5;
					cout<<"il suo punteggio e' "<<punti<<endl;
					cout<<"Lo stato dei suo carri Comandante:"<<endl;
					for(int a=0; a<5; a++)
					{
						cout<<"carro num "<<a+1<<endl;
						team[a].stato_carro();
						cout<<"-------------------------------------------------------------------------------"<<endl;
					}
					system("pause");
					choice=0;
					break;
		}
		if(punti>=100)
		{
			system("cls");
			cout<<"Complimenti Comandante ha vinto la campagna con un punteggio di "<<punti<<endl;
			system("pause");
			break;
		}
		if(conta_carri(team))
		{
		system("cls");
		cout<<"Comandante e' riuscito a distruggere tutti i nostri carri, puo' lasciare le sue dimissioni sulla mia scrivania"<<endl;
		system("pause");
		break;
		}
	}
	
	
}
