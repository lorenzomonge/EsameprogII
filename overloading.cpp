#include <iostream>

using namespace std;

class Persona
{

    public:
        Persona(){
            this->nome="";
            this->eta= 0;
        }

        Persona(string _nome, int _eta) {
            this->nome = _nome;
            this->eta  = _eta;

        }

        void print(){
            cout<<"mi chiamo "<<this->nome<< " e ho "<<this->eta<<"anni."<<endl;
        }
        void parla(){
            cout<<"Sono " << this->nome<< " e sto parlando da solo" <<endl;
        }

    protected:
        string nome;
        int eta;

};

class Oratore: public Persona {
    public:
    Oratore() : Persona() {}
    Oratore(string _nome, int _eta) :
        Persona(_nome,_eta) {}
    void parla() {
        Persona::parla();
        cout <<"sono l'oratore "<<nome<<"e sto proclamando un discorsos"<< endl;
    }
    
};



int main(){
    Persona p1;
    Persona p2("Fufi",5);

    p1.print();
    p2.print();

    p1.parla();
    //p2.parla("Giulia");

    Oratore o1("Cicerone", 2000);
    o1.print();
    o1.parla();
    

}
