#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;

}

void Laboratorio::agregarComputadora(const Computadora &c)
{
    if(cont <5){
        arr[cont] = c;
        cont++;
    }
    else
    {
        cout << "Arreglo lleno" << endl;
    }
}
void Laboratorio::mostrar()
{
    for(size_t i=0; i<cont; i++){
        Computadora &c = arr[i];
        cout << "Nombre del equipo: " << c.getNombreEquipo() << endl;
        cout << "Sistema operativo: " << c.getSistemaOp() << endl;
        cout << "Memoria Ram: " << c.getMemoriaRam() << "GB" << endl;
        cout << "Memoria SSD: " << c.getMemoriaSSD() << "GB" << endl;
        cout << endl;
    }
}
