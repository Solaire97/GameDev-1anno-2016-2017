#include<iostream>

using namespace std;

int main()
{
	int choice=0;
	char NG='Y';
	while(NG=='Y' || NG=='y')
	{
		system("cls");
		choice=0;
		cout<<"Sono appena tornato a casa da lavoro, stanco morto mi dirigo in camera da letto per\nriposarmi, ma mi torna in mente che devo andare a prendere mia figlia Alihana a scuola.\nSfortunatamente mi accorgo che la macchina ha esaurito la benzina, quindi saro' costretto ad\nusufruire dei servizi di trasporto pubblici...\n\n"<<endl;
		system("Pause");
		system("cls");
		cout<<"Indossato il cappotto e uscito di casa, mi dirigo verso la stazione ferroviaria, dato che e'\npresente anche una fermata dell'autobus. Arrivato alla pensilina, noto un gran gruppo di\npersone in prossimita' dei binari e in quel preciso istante, vedo anche arrivare l'autobus di linea.\nCon quale mezzo vado a scuola da mia figlia?\n\n"<<endl;
		cout<<"1)Treno"<<endl;
		cout<<"2)Autobus"<<endl;
		cout<<"3)Automobile"<<endl;
		cout<<"4)Preferisco andare a piedi"<<endl;
		while(choice<=0 || choice>=5)
		{
			cin>>choice;
		}
		system("cls");
		switch(choice){
			case 1: cout<<"Accidenti, il treno e'' in ritardo e hai perso pure l'autobus. Arriverai sicuramente in ritardo da tua figlia.\n Vuoi giocare ancora?"<<endl;
					cout<<"Y/N"<<endl;
					cin>>NG;
					break;
			case 2: cout<<"Sali sull'autobus, timbri il biglietto e ti metti a sedere...\n\n"<<endl;
					break;
					
			case 3: cout<<"Non hai la benzina e perdi sia il treno che l'autobus, non puoi andare a prendere tua figlia.\n Vuoi giocare ancora?"<<endl;
					cout<<"Y/N"<<endl;
					cin>>NG;
					break;
			case 4: cout<<"Scelta salutare ma non credo sia ora il momento di farsi 7 km a piedi\n Vuoi giocare ancora?"<<endl;
					cout<<"Y/N"<<endl;
					cin>>NG;
					break;
					
		}
		if(NG=='N' || NG=='n')
		{
			break;
		}
		choice=0;
		system("Pause");
		system("cls");
		cout<<"Durante il tragitto, l'autobus e' costretto a cambiare percorso a causa di un brutto incidente.\nLa scuola di mia figlia non e' molto distante e, attualmente, sono fermo nel traffico.\nCosa mi conviene fare?\n\n"<<endl;
		cout<<"1)Rimani sull'autobus"<<endl;
		cout<<"2)Assisti all'incidente"<<endl;
		cout<<"3)Scendi dall'autobus e vai a piedi'"<<endl;
		cout<<"4)Scendi dall'autobus per prenderne un altro"<<endl;
		while(choice<=0 || choice>=5)
		{
			cin>>choice;
		}
		system("cls");
		switch(choice){
			case 1: cout<<"A causa della deviazione, arrivi in ritardo da tua figlia\nVuoi giocare ancora?"<<endl;
					cout<<"Y/N"<<endl;
					cin>>NG;
					break;
			case 2: cout<<"Riesci a salvare la vita di un pensionato 90enne, ma tua figlia viene rapita dalla mafia russa.\n Vuoi giocare ancora?"<<endl;
					cout<<"Y/N"<<endl;
					cin>>NG;
					break;
			case 3: cout<<"Ti incammini..."<<endl;
					break;
			case 4: cout<<"Sali su un altro autobus, ma ti accorgi che non ti porta a scuola di tua figlia.\n Vuoi giocare ancora?"<<endl;
					cout<<"Y/N"<<endl;
					cin>>NG;
					break;
					
		}
		if(NG=='N' || NG=='n')
		{
			break;
		}
		choice=0;
		system("Pause");
		system("cls");
		cout<<"Riesco ad arrivare davanti alla scuola. Cosa faccio?\n\n"<<endl;
		cout<<"1)Entri dentro"<<endl;
		cout<<"2)Vedi tua figlia dall'altro lato della strada e la raggiungi"<<endl;
		cout<<"3)Fumi una sigaretta"<<endl;
		cout<<"4)Te ne vai"<<endl;
		while(choice<=0 || choice>=5)
		{
			cin>>choice;
		}
		system("cls");
		switch(choice){
			case 1: cout<<"Cerchi di aprire la porta, ma e' chiusa, e' Domenica"<<endl;
					break;
			case 2: cout<<"Non e' lei e, a meta' strada, vieni investito('Fatality')"<<endl;
					break;
			case 3: cout<<"Ti fumi una sigaretta, ma ti senti male e muori. 'I VINCENTI NON FUMANO!'"<<endl;
					break;
			case 4: cout<<"Ti ricordi che non hai una figlia... DROGATI MENO!"<<endl;
					cout<<"Te ne torni a casa senza pensieri e ti riposi per il giorno dopo."<<endl;
					break;
					
		}
		system("pause");
		system("cls");
		cout<<"Il gioco e' finito, vuoi rigiocare?"<<endl;
		cout<<"Y/N"<<endl;
		cin>>NG;
		if(NG=='N' || NG=='n')
		{
			break;
		}
	}
	return 0;
}
