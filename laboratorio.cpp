#include "laboratorio.h"
#include<fstream>
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
    cout << left;
    cout << setw(15) << "Nombre";
    cout << setw(18) << "Sistema Operativo";
    cout << setw(15) << "Memoria Ram";
    cout << setw(15) << "Memoria SSD";
    cout << endl;
    for(size_t i=0; i<cont; i++){
        Computadora &c = arr[i];
        cout << c;
        /*cout << "Nombre del equipo: " << c.getNombreEquipo() << endl;
        cout << "Sistema operativo: " << c.getSistemaOp() << endl;
        cout << "Memoria Ram: " << c.getMemoriaRam() << "GB" << endl;
        cout << "Memoria SSD: " << c.getMemoriaSSD() << "GB" << endl;
        cout << endl;*/
    }
}
void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadora_tabla.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo << setw(15) << "Nombre";
        archivo << setw(18) << "Sistema Operativo";
        archivo << setw(15) << "Memoria Ram";
        archivo << setw(15) << "Memoria SSD";
        archivo << endl;
        for(size_t i=0; i<cont; i++){
        Computadora &c = arr[i];
        archivo << c;
        }
    }
    archivo.close();
}
void Laboratorio::respaldar()
{
    ofstream archivo("computadora.txt");
    if(archivo.is_open()){
        for(size_t i=0; i<cont; i++){
        Computadora &c = arr[i];
        archivo << c.getNombreEquipo() << endl;
        archivo << c.getSistemaOp() << endl;
        archivo << c.getMemoriaRam() << endl;
        archivo << c.getMemoriaSSD() << endl;
        //archivo << c;
        }
    }
    archivo.close();
}
void Laboratorio::recuperar()
{
    ifstream archivo("computadora.txt");
    if(archivo.is_open()){
        string temp;
        int memoriaRam;
        int memoriaSSD;
        Computadora c;

        while (true)
        {
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            c.setNombreEquipo(temp);
            getline(archivo, temp);
            c.setSistemaOp(temp);
            getline(archivo, temp);
            memoriaRam = stoi(temp);
            c.setMemoriaRam(memoriaRam);
            getline(archivo, temp);
            memoriaSSD = stoi(temp);
            c.setMemoriaSSD(memoriaSSD);

            agregarComputadora(c);
        }
    }
    archivo.close();
}