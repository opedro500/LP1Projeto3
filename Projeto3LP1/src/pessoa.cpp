#include <iostream>
#include "../header/pessoa.hpp"

std::string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setNome(std::string novoNome)
{
    nome = novoNome;
}

std::string Pessoa::getCpf()
{
    return cpf;
}

void Pessoa::setCpf(std::string novoCPF)
{
    cpf = novoCPF;
}

std::string Pessoa::getDataNascimento()
{
    return dataNascimento;
}

void Pessoa::setDataNascimento(std::string novaDataNascimento)
{
    dataNascimento = novaDataNascimento;
}

std::string Pessoa::getGenero()
{
    return genero;
}

void Pessoa::setGenero(std::string novoGenero)
{
    genero = novoGenero;
}

Endereco Pessoa::getEndereco()
{
    return endereco;
}

void Pessoa::setEndereco(Endereco novoEndereco)
{
    endereco = novoEndereco;
}
