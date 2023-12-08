#include <iostream>
#include "../header/tecnicoADM.hpp"

TecnicoADM::TecnicoADM(float adicionalProdutividadeInicial, std::string funcaoDesempenhadaInical)
{
    adicionalProdutividade = adicionalProdutividadeInicial;
    funcaoDesempenhada = funcaoDesempenhadaInical;
}

TecnicoADM::TecnicoADM()
{
}

TecnicoADM::~TecnicoADM()
{
}

float TecnicoADM::getAdicionalProdutividade()
{
    return adicionalProdutividade;
}

void TecnicoADM::setAdicionalProdutividade(float novoAdicionalProdutividade)
{
    adicionalProdutividade = novoAdicionalProdutividade;
}

std::string TecnicoADM::getFuncaoDesepenhada()
{
    return funcaoDesempenhada;
}

void TecnicoADM::setFuncaoDesepenhada(std::string novaFuncaoDesempenhada)
{
    funcaoDesempenhada = novaFuncaoDesempenhada;
}

void TecnicoADM::estaTrabalhando() const
{
    std::cout << "O tecnico administrativo esta trabalhando nesse momento!" << std::endl;
};