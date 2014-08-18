#ifndef PROFESSOR_H
#define PROFESSOR_H
 
#include "pessoa.h"
 
#include <string>
 
class Professor : public Pessoa
{
public:
    Professor(std::string);
    Professor(std::string, std::string, int, double);
    ~Professor();
    std::string getDisciplina();
 
protected:
 
private:
    Professor();
    std::string disciplina;
    // ...
};
 
#endif //PROFESSOR_H
