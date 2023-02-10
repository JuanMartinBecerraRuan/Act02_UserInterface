#ifndef NEURONA_H
#define NEURONA_H
#include <iostream>
#include <list>

using namespace std;

class Neurona{
    private:
        list<Neurona> lista_neuronas;
        int id, posicion_x,posicion_y,red,green,blue;
        double voltaje;
    public:
        Neurona(int,double,int,int,int,int,int);
        int getId();
        double getVoltaje();
        int getPosX();
        int getPosY();
        int getRed();
        int getGreen();
        int getBlue();
        list<Neurona> get_lista();
};

#endif // NEURONA_H
