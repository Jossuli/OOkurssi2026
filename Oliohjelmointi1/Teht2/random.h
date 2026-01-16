#ifndef RANDOM_H
#define RANDOM_H

class Random
{
public:
    Random(); //konstruktio suoritetaan aina kun luokasta luodaan olio
    void setSeed(long long); //plussat edessä
    long long getSeed();
    long long rand();

private:
    long long a; //privaatteja edessä eli -
    long long c;
    long long Xn;
    long long mod;
};

#endif // RANDOM_H
