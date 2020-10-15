#include<iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    Computadora c01 = Computadora("Macbook Air", "IOS",8,256);
    Computadora c02;
    c02.setNombreEquipo("Macbook Pro");
    c02.setSistemaOp("IOS");
    c02.setMemoriaRam(16);
    c02.setMemoriaSSD(128);
    Computadora c03 = Computadora("HP CORE i7", "Windows",6,512);
    Computadora c04;
    c04.setNombreEquipo("iMac");
    c04.setSistemaOp("IOS");
    c04.setMemoriaRam(16);
    c04.setMemoriaSSD(512);
    Computadora c05 = Computadora("DELL", "Linux",4,128);
    Laboratorio lb;
    lb.agregarComputadora(c01);
    lb.agregarComputadora(c02);
    lb.agregarComputadora(c03);
    lb.agregarComputadora(c04);
    lb.agregarComputadora(c05);

    lb.mostrar();

    return 0;
}
