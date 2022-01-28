#include <iostream>
#include "Wielomian.h"
using namespace std;

Wielomian dodajWielomiany(Wielomian a, Wielomian b)
{
    Wielomian nowy;
    if( a.getStopien()>b.getStopien())
    {
        nowy.ustawStopien(a.getStopien());
        int i;
        for( i=0; i<=b.getStopien(); i++)
            nowy.ustawWspolczynnik(i, a.getWspolczynnik(i)+b.getWspolczynnik(i));
        for (i; i<=a.getStopien();i++)
              nowy.ustawWspolczynnik(i, a.getWspolczynnik(i));
    }
    else{
         nowy.ustawStopien(b.getStopien());
        int i;
        for( i=0; i<=a.getStopien(); i++)
            nowy.ustawWspolczynnik(i, a.getWspolczynnik(i)+b.getWspolczynnik(i));
        for (i; i<=b.getStopien();i++)
              nowy.ustawWspolczynnik(i, b.getWspolczynnik(i));
    }
    return nowy;
}
Wielomian odejmijWielomiany(Wielomian a, Wielomian b)
{
    Wielomian nowy;
    if( a.getStopien()>b.getStopien())
    {
        nowy.ustawStopien(a.getStopien());
        int i;
        for( i=0; i<=b.getStopien(); i++)
            nowy.ustawWspolczynnik(i, a.getWspolczynnik(i)-b.getWspolczynnik(i));
        for (i; i<=a.getStopien();i++)
              nowy.ustawWspolczynnik(i, a.getWspolczynnik(i));
    }
    else{
         nowy.ustawStopien(b.getStopien());
        int i;
        for( i=0; i<=a.getStopien(); i++)
            nowy.ustawWspolczynnik(i, a.getWspolczynnik(i)-b.getWspolczynnik(i));
        for (i; i<=b.getStopien();i++)
              nowy.ustawWspolczynnik(i, -b.getWspolczynnik(i));
    }
    return nowy;
}
Wielomian pomnozWielomiany(Wielomian a, Wielomian b)
{
    Wielomian nowy;// = new Wielomian();
    nowy.ustawStopien(a.getStopien()+b.getStopien());

    for (int i = 0; i<=nowy.getStopien(); i++)
     nowy.ustawWspolczynnik(i, 0);
     //nowy.piszWspolczynniki();
   for (int i=0; i<=a.getStopien(); i++)
   {
     for (int j=0; j<=b.getStopien(); j++)
        {nowy.ustawWspolczynnik(i+j, nowy.getWspolczynnik(i+j) +a.getWspolczynnik(i)*b.getWspolczynnik(j));
       //  nowy.piszWspolczynniki();
        }
   }
    return nowy;
}

int main()
{
    Wielomian w1,w2;
    w1.czytajwielomian();
    w2.czytajwielomian();

    Wielomian w3 = dodajWielomiany(w1, w2);
  cout<<"wynikiem dodawania jest: "<<endl;  w3.piszWspolczynniki();

    Wielomian w4 = pomnozWielomiany(w1, w2);
   cout<<endl;
   cout<<"wynikiem monzenia jest "<<endl;
    w4.piszWspolczynniki();
    cout<<endl;
    cout<<"wynikiem odejmowania jest: " <<endl;
    Wielomian w5 = odejmijWielomiany(w1,w2);
    w5.piszWspolczynniki();
     Wielomian poch1 = w1.pochodna();
    Wielomian poch2 = w2.pochodna();
    cout<<endl;
    cout<<"Pochodne wielomianow:"<<endl;
    poch1.piszWspolczynniki();
    poch2.piszWspolczynniki();
    return 0;
}
