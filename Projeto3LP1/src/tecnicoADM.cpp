#include <iostream>
#include "../header/tecnicoADM.hpp"

template <typename T>
TecnicoADM<T>::TecnicoADM(T adicionalProdutividadeInicial, std::string funcaoDesempenhadaInical)
{
    adicionalProdutividade = adicionalProdutividadeInicial;
    funcaoDesempenhada = funcaoDesempenhadaInical;
}

template <typename T>
TecnicoADM<T>::TecnicoADM()
{
}

template <typename T>
TecnicoADM<T>::~TecnicoADM()
{
}

template <typename T>
T TecnicoADM<T>::getAdicionalProdutividade()
{
    return adicionalProdutividade;
}

template <typename T>
void TecnicoADM<T>::setAdicionalProdutividade(T novoAdicionalProdutividade)
{
    adicionalProdutividade = novoAdicionalProdutividade;
}

template <typename T>
std::string TecnicoADM<T>::getFuncaoDesepenhada()
{
    return funcaoDesempenhada;
}

template <typename T>
void TecnicoADM<T>::setFuncaoDesepenhada(std::string novaFuncaoDesempenhada)
{
    funcaoDesempenhada = novaFuncaoDesempenhada;
}

template <typename T>
void TecnicoADM<T>::estaTrabalhando() const
{
    std::cout << "O tecnico administrativo esta trabalhando nesse momento!" << std::endl;
}

template class TecnicoADM<float>;
template class TecnicoADM<int>;