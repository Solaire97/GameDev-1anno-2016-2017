#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;



class creatura
{
	int m_salute;
	int m_volonta;
	int m_attacco;
	int m_intimidazione;
	
public:
	int getSalute()
	{
		return(m_salute);
	}
	int getVolonta()
	{
		return(m_volonta);
	}
	creatura(int ssalute, int svolonta, int sattacco, int sintimidazione)
	{
		m_salute=ssalute;
		m_volonta=svolonta;
		m_attacco=sattacco;
		m_intimidazione=sintimidazione;
	}
	void showStats()
	{
		cout<<"salute: "<<m_salute<<endl;
		cout<<"volonta': "<<m_volonta<<endl;
	}
		
	int attacco()
	{
		srand(time(NULL));
		return(m_attacco+rand()%6);	
	}
	int intimidazione()
	{
		return(m_intimidazione+rand()%6);
	}
	void takedamage(int danno)
	{
		m_salute-=danno;
	}
	void takedamagevol(int paura)
	{
		m_volonta-=paura;
	}
	void riposare()
	{
		int riposo=(rand()%6)+5;
		m_salute+=riposo;
		if(m_salute>100) m_salute=100;
		m_volonta+=riposo;
		if(m_volonta>100) m_volonta=100;
	}
};

int incontro(creatura& Van_Helsing, creatura nemico, string nome)
{
	creatura nemici[3]={nemico, nemico, nemico};
	while(true)
	{
		system("pause");
		system("cls");
		int choice=0;
		cout<<"Van Helsing: "<<endl;
		Van_Helsing.showStats();
		for(int a=0; a<3; a++)
		{
			cout<<"il nemico "<<nome<<": "<<endl;
			nemici[a].showStats();
		}
		if(Van_Helsing.getSalute()<1 || Van_Helsing.getVolonta()<1)
		{
			cout<<"Sei Morto!"<<endl;
			return(0);
		}
		if(nemici[0].getSalute()<1 || nemici[0].getVolonta()<1 && nemici[1].getSalute()<1 || nemici[1].getVolonta()<1 && nemici[2].getSalute()<1 || nemici[2].getVolonta()<1)
		{
			cout<<"I nemici di classe "<< nome <<" è morto, puoi proseguire"<<endl;
			return(1);
		}
		cout<<"cosa vuoi fare?"<<endl;
		cout<<"1) Attaccare"<<endl;
		cout<<"2) Intimidire"<<endl;
		while(choice<1 || choice>2)
		{
			cin>>choice;
		}
		switch(choice)
		{
			case 1:
				for(int a=0; a<3; a++)
				{
					nemici[a].takedamage(Van_Helsing.attacco());
				}
				break;
			case 2:
				for(int a=0; a<3; a++)
				{
					nemici[a].takedamagevol(Van_Helsing.intimidazione());
				}
				break;
		}
		cout<<"adesso tocca ai nemici di classe "<< nome<<endl;
		for(int a=0; a<3; a++)
		{
			switch((rand()%2))
			{
				case 0:
					if(nemici[a].getSalute()<1 || nemici[a].getVolonta()<1)
					{
						break;
					}
					cout<<"il nemico numero "<<a<<" attacca"<<endl;
					Van_Helsing.takedamage(nemici[a].attacco());
					break;
				case 1:
					if(nemici[a].getSalute()<1 || nemici[a].getVolonta()<1)
					{
						break;
					}
					cout<<"Il nemico numero "<<a<<" intimidisce"<<endl;
					Van_Helsing.takedamagevol(nemici[a].intimidazione());
			}
		}
		
	 }
}

int incontroDracula(creatura& Van_Helsing, creatura nemico)
{
	while(true)
	{
		system("cls");
		int choice=0;
		cout<<"Van Helsing: "<<endl;
		Van_Helsing.showStats();
		cout<<"Dracula: "<<endl;
		nemico.showStats();
		if(Van_Helsing.getSalute()<=0 || Van_Helsing.getVolonta()<=0)
		{
			cout<<"Sei Morto!"<<endl;
			return(0);
		}
		if(nemico.getSalute()<=0 || nemico.getVolonta()<=0)
		{
			cout<<"Hai ucciso Dracula!"<<endl;
			return(1);
		}
		cout<<"cosa vuoi fare?"<<endl;
		cout<<"1) Attaccare"<<endl;
		cout<<"2) Intimidire"<<endl;
		while(choice<1 || choice>2)
		{
			cin>>choice;
		}
		switch(choice)
		{
			case 1:
				for(int a=0; a<3; a++)
				{
					nemico.takedamage(Van_Helsing.attacco());
				}
				break;
			case 2:
				for(int a=0; a<3; a++)
				{
					nemico.takedamagevol(Van_Helsing.intimidazione());
				}
				break;
		}
		cout<<"adesso tocca a Dracula"<<endl;
			switch((rand()%2)+1)
			{
				case 1:
					cout<<"il Dracula ti attacca"<<endl;
					Van_Helsing.takedamage(nemico.attacco());
					break;
				case 2:
					cout<<"Il Dracula ti intimidisce"<<endl;
					Van_Helsing.takedamagevol(nemico.intimidazione());
					break;
			}
		}
		
	 }

int main()
{
	creatura Van_Helsing(100, 100, 10, 10);
	creatura Dracula(50, 50, 20, 20);
	creatura servitore(12, 30, 12, 10);
	creatura spettro(100, 12, 2, 20);
	bool isDraculaDead=false;
	int choice=0;
	int isAlive=1;
	int probDracula=10;
	while(isAlive==1)
	{
		choice=0;
		cout<<"Sei il professor Van Helsing, la tua missione e' trovare e uccidere Dracula"<<endl;
		cout<<"puoi eseguire 2 azioni: Proseguire la caccia, dove segui le tracce di Dracula, o\npuoi riposare e recuperare punti salute e volonta'\n"<<endl;
		cout<<"1) Prosegui la caccia"<<endl;
		cout<<"2) Riposati"<<endl;
		while(choice<1 || choice>2)
		{
			cin>>choice;
		}
		switch(choice)
		{
			case 1:
				if(rand()%10<probDracula)
				{
					if(rand()%100>50)
					{
						isAlive=incontro(Van_Helsing, spettro, "spettro");
					}
					else
					{
						isAlive=incontro(Van_Helsing, servitore, "servitore");
					}
					probDracula++;
					system("pause");
					system("cls");
					break;
				}
				else
				{
					cout<<"Hai trovato Dracula, preparati all'incontro..."<<endl;
					system("pause");
					system("cls");
					isAlive=incontroDracula(Van_Helsing, Dracula);
					break;
				}
			case 2:
				if(rand()%100>30)
				{
					cout<<"Ti Riposi"<<endl;
					Van_Helsing.showStats();
					Van_Helsing.riposare();
					system("pause");
					system("cls");
				}
				else
				{
					if(rand()%100>50)
					{
						isAlive=incontro(Van_Helsing, spettro, "spettro");
					}
					else
					{
						isAlive=incontro(Van_Helsing, servitore, "servitore");
					}
					system("pause");
					system("cls");
				}
				break;
		}
		if(isAlive==1 && isDraculaDead==1)
		{
			cout<<"Hai Salvato il mondo"<<endl;
			break;
		}
		else
		{
			if(isAlive==0)
			{
				cout<<"il mondo è caduto nell'oscurita'"<<endl;
				break;
			}
		}
		
	}
}

























































