#include "professor.h"
 
Professor::Professor(std::string nomeDisciplina)
{
    disciplina = nomeDisciplina;
}
 
Professor::Professor(std::string nomeDisciplina, std::string nome, int idade, double altura): Pessoa(nome, idade, altura)
{
    disciplina = nomeDisciplina;
}
 
Professor::~Professor()
{
 
}
 
std::string Professor::getDisciplina()
{
    return disciplina;
