#include<iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    Laboratorio lb;
    lb.recuperar();
    lb.mostrar();
    /*Computadora c01 = Computadora("HP CORE i7", "Windows",6,512);
    Computadora c02;
    c02.setNombreEquipo("Macbook Air");
    c02.setSistemaOp("IOS");
    c02.setMemoriaRam(8);
    c02.setMemoriaSSD(256);
    Laboratorio lb;
    lb.agregarComputadora(c01);
    lb << c02;
    Computadora c03;
    cin >> c03;
    lb << c03;

    lb.mostrar();
    lb.respaldar_tabla();
    lb.respaldar();*/
    return 0;
}
