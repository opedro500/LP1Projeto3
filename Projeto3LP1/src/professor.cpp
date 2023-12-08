#include <iostream>
#include "../header/professor.hpp"

Professor::Professor(Nivel nivelProfessorInicial, Formacao formacaoProfessorInicial, std::string disciplinaInicial)
{
    nivelProfessor = nivelProfessorInicial;
    formacaoProfessor = formacaoProfessorInicial;
    disciplina = disciplinaInicial;
}

Professor::Professor()
{
}

Professor::~Professor()
{
}

Nivel Professor::getNivelProfessor()
{
    return nivelProfessor;
}

void Professor::setNivelProfessor(Nivel novoNivelProfessor)
{
    nivelProfessor = novoNivelProfessor;
}

Formacao Professor::getFormacaoProfessor()
{
    return formacaoProfessor;
}

void Professor::setFormacaoProfessor(Formacao novaFormacaoProfessor)
{
    formacaoProfessor = novaFormacaoProfessor;
}

std::string Professor::getDisciplina()
{
    return disciplina;
}

void Professor::setDisciplina(std::string novaDisciplina)
{
    disciplina = novaDisciplina;
}

void Professor::estaTrabalhando() const
{
    std::cout << "O professor esta trabalhando nesse momento!" << std::endl;
};