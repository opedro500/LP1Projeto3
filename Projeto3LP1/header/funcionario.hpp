#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include "./pessoa.hpp"

/**
 * @author Pedro José Cavalcanti Cabral.
 * @author Matheus Eugenio de Moura.
 * @author Leonam Medeiros de Sousa.
 * @since 12/07/2023
 * @version 1.0
 */
class Funcionario : public Pessoa
{

private:
    std::string matricula;
    float salario;
    std::string departamento;
    int cargaHoraria;
    std::string dataIngresso;

public:
    std::string getMatricula();
    void setMatricula(std::string matricula);
    float getSalario();
    void setSalario(float salario);
    std::string getDepartamento();
    void setDepartamento(std::string departamento);
    int getCargaHoraria();
    void setCargaHoraria(int cargaHoraria);
    std::string getDataIngresso();
    void setDataIngresso(std::string getDataIngresso);
    virtual void estaTrabalhando() const = 0;
};

#endif