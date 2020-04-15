#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Perfil.h"

class Professor : public Perfil {
    public:
        Professor(string nome, string departamento);
        ~Professor();
        //virtual ~Professor(); //???

        string getDepartamento();
    private:
        string departamento;
};

#endif // PROFESSOR_H