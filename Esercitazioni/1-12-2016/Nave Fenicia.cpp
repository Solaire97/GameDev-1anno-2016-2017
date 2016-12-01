#include <iostream>
#include <ctime>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

void carica_nave(vector<string>& Stiva);
void perdi_carico(vector<string>& Stiva);
void regalo(vector<string>& Stiva);
void scambio(vector<string>& Stiva);
void pirati(vector<string>& Stiva);
void mania(vector<string>& Stiva);
void tempesta(vector<string>& Stiva);
void ricco(vector<string>& Stiva);



int main ()
{
	vector<string> Stiva;
	carica_nave(Stiva);
	system("pause");
	system("cls");
	perdi_carico(Stiva);
	system("pause");
	system("cls");
	regalo(Stiva);
	system("pause");
	system("cls");
	scambio(Stiva);
	system("pause");
	system("cls");
	pirati(Stiva);
	system("pause");
	system("cls");
	mania(Stiva);
	system("pause");
	system("cls");
	tempesta(Stiva);
	system("pause");
	system("cls");
	ricco(Stiva);
	system("pause");
	system("cls");
	return 0;
}

void carica_nave(vector<string>& Stiva)
{
	vector<string>::iterator iter;
	Stiva.push_back("vino");
	Stiva.push_back("lana");
	Stiva.push_back("avorio");
	Stiva.push_back("legno");
	for(iter=Stiva.begin();iter!=Stiva.end(); iter++)
	{
		cout<< *iter<<endl;
	}
}

void perdi_carico(vector<string>& Stiva)
{
	vector<string>::iterator iter;
	Stiva.pop_back();
	for(iter=Stiva.begin();iter!=Stiva.end(); iter++)
	{
		cout<< *iter<<endl;
	}
}

void regalo(vector<string>& Stiva)
{
	vector<string>::iterator iter;
	Stiva.push_back("the");
	for(iter=Stiva.begin();iter!=Stiva.end(); iter++)
	{
		cout<< *iter<<endl;
	}
}

void scambio(vector<string>& Stiva)
{
	vector<string>::iterator iter;
	iter=find(Stiva.begin(),Stiva.end(), "lana");
	*iter="frumento";
	for(iter=Stiva.begin();iter!=Stiva.end(); iter++)
	{
		cout<< *iter<<endl;
	}
}

void pirati(vector<string>& Stiva)
{
	vector<string>::iterator iter;
	iter=find(Stiva.begin(), Stiva.end(), "vino");
	Stiva.erase(iter);
	for(iter=Stiva.begin();iter!=Stiva.end(); iter++)
	{
		cout<< *iter<<endl;
	}
}

void mania(vector<string>& Stiva)
{
	vector<string>::iterator iter;
	sort(Stiva.begin(), Stiva.end());
	for(iter=Stiva.begin();iter!=Stiva.end(); iter++)
	{
		cout<< *iter<<endl;
	}
}

void tempesta(vector<string>& Stiva)
{
	srand(time(0));
	vector<string>::iterator iter;
	random_shuffle(Stiva.begin(), Stiva.end());
	for(iter=Stiva.begin();iter!=Stiva.end(); iter++)
	{
		cout<< *iter<<endl;
	}
}

void ricco(vector<string>& Stiva)
{
	vector<string>::iterator iter;
	Stiva.clear();
	Stiva.push_back("oro");
	for(iter=Stiva.begin();iter!=Stiva.end(); iter++)
	{
		cout<< *iter<<endl;
	}
}
