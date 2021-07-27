#include <iostream>
#include <ctime>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <sstream>


using namespace std;


class Tessera
{
    string nome;
    int numero;
    bool finestrella[5];
    int scheda[5];
    

    public:

    Tessera(string N){
        nome=N;
       // numero=n; 
    }
    

    bool nuova()
    {   
        //inizializzo le finestre tutte come aperte
        for(int i=0;i<5;i++)
        {
            finestrella[i]=true;
            
        }
            //cout<<"ora tutte le finestrelle sono aperte!!"<< endl;
    }

    bool controlla(int n)
    {
        for(int i=0;i<5;i++)
        {
            if(scheda[i]==n)
            {
                finestrella[i]==false;
                return true;
            }
        }
    }

    bool completa()
    {
        int cont=0;

        for(int i=0; i<5; i++)
        {

            if(finestrella[i]==false)
            {
                cont++;
            }
        }
        if(cont==5)
        {
            return true;
        }
    }

    

    


    void stampa()
    {
        stringstream ss;
        string a =" ";
        int b;

        for(int i=0;i<5;i++)
        {
            
            if(!finestrella[i])
            {
              ss<<"##";
              ss>>a;
              
               
            }
            else
            {
                
                ss<<numero;
                ss>>b;
            }
            
        }

        cout<<nome<<":"<<a<<b;
    }

};


int main()
{    

    Tessera t("Mario");

    t.nuova();
    t.controlla(100);
    t.stampa();




}


