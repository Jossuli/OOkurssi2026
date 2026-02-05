#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout << "Luodaan notifikaattori " << endl;
}
void Notifikaattori::lisaa(Seuraaja *lisays)
{
    if(Seuraajat==nullptr)
    {
        Seuraajat=lisays;
    }
    else
    {
        Seuraaja * entinen=Seuraajat;
        Seuraajat=lisays;
        Seuraajat->next=entinen;
        cout << "Lisataan vastaanottaja " << lisays->getNimi() << endl;
    }
}
void Notifikaattori::poista(Seuraaja*poisto)
{
    if (Seuraajat==poisto)
    {
        Seuraajat=poisto->next;
        cout << "Poistetaan " << poisto->getNimi() << " vastaanottajien listalta." << endl;
        return;
    }
    Seuraaja *p =Seuraajat;
    while(p!=nullptr)
    {
        if(p->next==poisto)
        {
            p->next=p->next->next;
            cout << "Poistaa seuraajan "<< poisto->getNimi() << endl;
            return;
        }
        p=p->next;
    }

}
void Notifikaattori::tulosta()
{
    Seuraaja *o = Seuraajat;
        while (o != nullptr)
        {
        cout << "Seuraaja " << o->getNimi() <<endl;
        o = o->next;
        }

}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *s=Seuraajat;
    while(s != nullptr)
    {
        s->paivitys(viesti);
        s=s->next;
    }
}


