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
	if(score<=59)
	{
		cout<<"Il tuo punteggio e' E"<<endl;
	}
	else
	{
	    if(score>=60 && score<=69)
	    {
		    cout<<"Il tuo punteggio e' D"<<endl;
	    }
	    else
	    {
	        if(score>=70 && score<=79)
        	{
	        	cout<<"Il tuo punteggio e' C"<<endl;
        	}
        	else
        	{
	            if(score>=80 && score<=89)
            	{
		            cout<<"Il tuo punteggio e' B"<<endl;
	            }
	            else
            	{
                    if(score>=90 && score<=100)
                    {
                        cout<<"Il tuo punteggio e' A"<<endl;
                    }
	            }
        	}
    	}
	}
	return 0;
}
