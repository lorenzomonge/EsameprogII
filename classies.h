#ifndef CLASSI_H
#define CLASSI_H


#include <iostream>
#include <stdio.h>
#include <sstream>

using namespace std;

class Studenti
{
    int matricola;
    string cognome, nome, citta;
    double media;

  public:

    Studenti(string COGNOME, string NOME, string CITTA, int MATRICOLA, double MEDIA)
    {
      setCognome(COGNOME);
      setNome(NOME);
      setCitta(CITTA);
      setMatricola(MATRICOLA);
      setMedia(MEDIA);
    }


    //FUNZIONI SET

    void setCognome( const string COGNOME) {cognome=COGNOME;}
    void setNome(const string NOME) {nome=NOME;}
    void setCitta(const string CITTA) {citta=CITTA;}
    void setMatricola(const int MATRICOLA) {matricola=MATRICOLA;}
    void setMedia(const double MEDIA) {media=MEDIA;}

    //FUNZIONI GET

    string getCognome() {return cognome;}
    string getNome() {return nome;}
    string getCitta() {return citta;}
    int getMatricola() {return matricola;}
    double getMedia() {return media;}
};

  //lista

  class NodeDL
  {
  private:

      NodeDL* next;
      NodeDL* prev;
      Studenti valore;

  public:

      NodeDL(Studenti valore, NodeDL *prev, NodeDL* next) : valore(valore),
        prev(prev),   next(next)  {}

      NodeDL(Studenti valore) :  NodeDL(valore, NULL, NULL) {}
      NodeDL() : NodeDL(0, NULL, NULL) {}

      void setValude( Studenti valore) {this->valore = valore;}
      void setPrev(NodeDL *prev) {this->prev = prev;}
      void setNext(NodeDL *next) {this->next =next; }

      int getValue() const {return valore; }
      NodeDL *getPrev() const {return prev; }
      NodeDL *getNext() const {return next; }

      string toString() const
      {
        stringstream stream;
        stream << "valore NodeDl = " << valore << ", prev =" << prev << ",next ="<< next;
        return stream.str();
      }

      friend ostream& operator <<(ostream& out, const NodeDL& n)
      {
        out << n.toString();
        return out;
      }

  };

  class Lista
  {
  private:

      NodeDL *testa, *coda, *nil;
      int length;
      bool ascend;

    public:

      Lista(bool ascend) : head(NULL), tail(NULL), length(0), ascend(ascend) {
        nil=new NodeDL;
      }
        Lista() : Lista(true) {}

        //verifivo se la lista è vuota

        bool isEmpty() {
          return(head == NULL) && (tail == NULL);
        }




  };







//ciao

#endif
