#include<iostream>


using namespace std;

main()
{
	int punteggi[10];
	int media=0;
	for(int c=0; c<10; c++)
	{
		cout<<"inserisci il punteggio del giocatore "<<c<<endl;
		cin>>punteggi[c];
		system("cls");
	}
	
	for(int c=9; c>=0; c--)
	{
		cout<<"il punteggio del giocatore "<<c<<" e' "<<punteggi[c]<<endl;
	}
	for(int c=0; c<10; c++)
	{
		media+=punteggi[c];
	}
	media=media/10;
	cout<<"\n\nLa media e' "<<media<<endl;
}
