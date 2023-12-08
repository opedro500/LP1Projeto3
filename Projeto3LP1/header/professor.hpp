#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include "./funcionario.hpp"

enum Nivel
{
    I,
    II,
    III,
    IV,
    V,
    VI,
    VII,
    VIII
};

enum Formacao
{
    ESPECIALIZACAO,
    MESTRADO,
    DOUTORADO
};

/**
 * @author Pedro José Cavalcanti Cabral.
 * @author Matheus Eugenio de Moura.
 * @author Leonam Medeiros de Sousa.
 * @since 12/07/2023
 * @version 1.0
 */
class Professor : public Funcionario
{

private:
    Nivel nivelProfessor;
    Formacao formacaoProfessor;
    std::string disciplina;

public:
    Professor(Nivel nivelProfessor, Formacao formacaoProfessor, std::string disciplina);
    Professor();
    ~Professor();
    Nivel getNivelProfessor();
    void setNivelProfessor(Nivel nivelProfessor);
    Formacao getFormacaoProfessor();
    void setFormacaoProfessor(Formacao formacaoProfessor);
    std::string getDisciplina();
    void setDisciplina(std::string getDisciplina);
    void estaTrabalhando() const override;
};

#endif