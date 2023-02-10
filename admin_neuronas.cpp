#include "admin_neuronas.h"

Admin_Neuronas::Admin_Neuronas(){
}

void Admin_Neuronas::agregar_inicio(Neurona nuevo){
    lista_neuronas.push_front(nuevo);
}

void Admin_Neuronas::agregar_final(Neurona nuevo){
    lista_neuronas.push_back(nuevo);
}

list<Neurona> Admin_Neuronas::mostrar(){
    return lista_neuronas;
}


