#include <iostream>
#include "../header/funcionario.hpp"

std::string Funcionario::getMatricula()
{
    return matricula;
}

void Funcionario::setMatricula(std::string novaMatricula)
{
    matricula = novaMatricula;
}

float Funcionario::getSalario()
{
    return salario;
}

void Funcionario::setSalario(float novoSalario)
{
    salario = novoSalario;
}

std::string Funcionario::getDepartamento()
{
    return departamento;
}

void Funcionario::setDepartamento(std::string novoDepartamento)
{
    departamento = novoDepartamento;
}

int Funcionario::getCargaHoraria()
{
    return cargaHoraria;
}

void Funcionario::setCargaHoraria(int novaCargaHoraria)
{
    cargaHoraria = novaCargaHoraria;
}

std::string Funcionario::getDataIngresso()
{
    return dataIngresso;
}

void Funcionario::setDataIngresso(std::string novaDataIngresso)
{
    dataIngresso = novaDataIngresso;
}



