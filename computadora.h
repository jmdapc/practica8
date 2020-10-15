#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include<iostream>
using namespace std;

class Computadora{
    string sistemaOp;
    string nombreEquipo;
    int memoriaRam;
    int memoriaSSD;

    public:
    Computadora();
    Computadora(const string &nombreEquipo,
                const string &sistemaOp,
                int memoriaRam,
                int memoriaSSD);
    void setNombreEquipo(const string &v);
    string getNombreEquipo();
    void setSistemaOp(const string &v);
    string getSistemaOp();
    void setMemoriaRam(int v);
    int getMemoriaRam();
    void setMemoriaSSD(int v);
    int getMemoriaSSD();

};

#endif