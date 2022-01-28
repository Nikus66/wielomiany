#include "Wielomian.h"
#include <iostream>
#include <iomanip>
using namespace std;

Wielomian::Wielomian()
{
    stopien=0;
    wspolczynniki = new double[0];
}
Wielomian::Wielomian( const Wielomian & w)
{
     this->stopien=w.stopien;
     wspolczynniki = new double[stopien+1];
    for(int i=0; i<=this->stopien;i++)
    {
    this->wspolczynniki[i]=w.wspolczynniki[i];
    }
}

Wielomian::~Wielomian()
{
    delete[] wspolczynniki;
}
void Wielomian::ustawStopien(int s)
{
    delete[] wspolczynniki;
    stopien=s;
    wspolczynniki = new double[stopien+1];
}

void Wielomian::piszWspolczynniki()
{ int i;
    cout<<"\n[";
    for( i=0; i<this->stopien;i++)
    {
        cout<<setprecision(2)<<fixed<<wspolczynniki[i]<<",";
    }
     cout<<setprecision(2)<<fixed<<wspolczynniki[i]<<"]";
}
void Wielomian::czytajwielomian()
{
    cout<<"Podaj stopien ";
    cin>>stopien;
    delete[] wspolczynniki;
    wspolczynniki = new double[stopien+1];
    cout<<"Podaj wspolczynniki wielomianu od ostatniego wspó³czynnka:"<<endl;
    for(int i=0; i<=this->stopien;i++)
    {
       cin>>wspolczynniki[i];
    }
}
    Wielomian Wielomian::pochodna()
{
    Wielomian nowy;
    nowy.ustawStopien(this->stopien-1);
    for(int i=1;i<=this->stopien; i++)
    {
        nowy.ustawWspolczynnik(i-1,this->getWspolczynnik(i)*i);
    }
    return nowy;

}


