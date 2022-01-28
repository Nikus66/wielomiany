#ifndef WIELOMIAN_H
#define WIELOMIAN_H
#include <iostream>
using namespace std;

class Wielomian
{
    int stopien;
    double *wspolczynniki;
    public:
        Wielomian();
        Wielomian(const Wielomian& w);//konstruktor kopiujacy
        ~Wielomian();
        void ustawStopien(int s);

        void ustawWspolczynnik(int i, double w){wspolczynniki[i]=w;
       // cout<<i<<" wspolczynynnik[i] = "<<wspolczynniki[i]<<endl;
       }
        void piszWspolczynniki();
        void czytajwielomian();
        int getStopien(){return stopien;}
       // double * getWspolczynniki(){return wspolczynniki;}
        double getWspolczynnik(int i){return wspolczynniki[i];}
          Wielomian pochodna();

};

#endif // WIELOMIAN_H
