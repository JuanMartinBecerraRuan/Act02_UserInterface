#ifndef ADMIN_NEURONAS_H
#define ADMIN_NEURONAS_H
#include <neurona.h>
#include <list>

class Admin_Neuronas{
    public:
        Admin_Neuronas();
        void agregar_inicio(Neurona*);
        void agregar_final(Neurona*);
        list<Neurona> mostrar();
};

#endif // ADMIN_NEURONAS_H
