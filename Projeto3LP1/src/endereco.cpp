#include <iostream>
#include "../header/endereco.hpp"

std::string Endereco::getRua()
{
    return rua;
}

void Endereco::setRua(std::string novaRua)
{
    rua = novaRua;
}

int Endereco::getNumero()
{
    return numero;
}

void Endereco::setNumero(int novoNumero)
{
    numero = novoNumero;
}

std::string Endereco::getBairro()
{
    return bairro;
}

void Endereco::setBairro(std::string novoBairro)
{
    bairro = novoBairro;
}

std::string Endereco::getCidade()
{
    return cidade;
}

void Endereco::setCidade(std::string novaCidade)
{
    cidade = novaCidade;
}

std::string Endereco::getCep()
{
    return cep;
}

void Endereco::setCep(std::string novoCep)
{
    cep = novoCep;
}
